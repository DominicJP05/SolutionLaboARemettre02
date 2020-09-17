// But: Calculer le montant qu'un individu devra débourser pour faire un voyage dans une automobile louée. En utilisant un algorithme.
// Auteur: Dominic Jeannotte-Parent
// Date: 2020-09-16

// Inclure les modules
#include <iostream>
using namespace std;

// Ouverture du main

int main()
{
	// Caractères spéciaux
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int jour;
	float km;
	float kmmoy;
	float depense;
	float depense1;
	float kmmoyplus;
	float litres;
	float depensefinal;
	
	// Au départ le coût est de 0 et il augmentera
	depense = 0;
	depense1 = 0;
	// Demander à l'utilisateur le nombre de jours de location de la voiture
	
	cout << "Bonjour !" << endl << "Bienvenu au logiciel de calcul des dépenses pour un voyage en automobile !" << endl; // Message de bienvenu
	
	cout << "Veuillez insérer le nombre de jours pendant lequel vous louerez la voiture: ";
	cin >> jour;
	// Calcul du coût pour le nombre de jour et stockage dans la variable depense.
	depense = jour * 45;
	
	// Demander le nombre de km parcouru par jour en moyenne.

	cout << "Veuillez insérer le nombre de Kilomètres parcourus au total: ";
	cin >> km;
	// calculer la moyenne des kilomètres
	kmmoy = km / jour;
	// Si la moyenne dépasse 250 on charge sinon on ne change pas le prix.
	if (kmmoy > 250)
	{
		kmmoyplus = kmmoy - 250; // On soustrait les km gratuit pour avoir la moyenne des km extra.
		depense1 = depense + (0.05 * kmmoyplus); // Rajouter le surplus à la valeur dépense.
		cout << "Avec vos kilomètres supplémentaire votre facture est maintenant de " << depense1 << " $." << endl;// Affiche la facture temporaire
	}
	else
	{
		cout << "Pas de kilomètre supplémentaire. Vous ne serez pas chargez plus." << endl; // Message d'avertissement
		cout << "Votre facture est maintenant de " << depense << " $." << endl; // Facture temporaire
	}

	cout << "Calcul du prix du gas veuillez patientez..." << endl; // Message inutile au programme seulement pour l'utilisateur
	litres = 7.6 *(km / 100); // Calcul les litres au 100km
	

	if (depense1 > depense)
	{
		depensefinal = depense1; // Déterminer le prix final au même que depense1
		depensefinal = depense1 + litres * 1.25; // Recalcule la dépense final avec le prix du gas
		cout << "Votre facture s'élève à " << depensefinal << " $. ";
	}
	else
	{
		depensefinal = depense; // Déterminer le prix final au même que depense
		depensefinal = depense + litres * 1.25; // Recalcule la dépense final avec le prix du gas
		cout << "Votre facture s'élève à " << depensefinal << " $. "; // Affiche le montant final de la facture
	}
	/*
		Plan de test:

		Jours:			Km:			Prix ($):
		5				1000		320
		2				600			149.5
		12				2500		777.5
		90				15000		5475
		3				20			136.9

	*/

	return 0;
}
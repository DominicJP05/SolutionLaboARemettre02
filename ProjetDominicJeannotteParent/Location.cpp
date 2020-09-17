// But: Calculer le montant qu'un individu devra d�bourser pour faire un voyage dans une automobile lou�e. En utilisant un algorithme.
// Auteur: Dominic Jeannotte-Parent
// Date: 2020-09-16

// Inclure les modules
#include <iostream>
using namespace std;

// Ouverture du main

int main()
{
	// Caract�res sp�ciaux
	setlocale(LC_ALL, "");

	// D�claration des variables
	int jour;
	float km;
	float kmmoy;
	float depense;
	float depense1;
	float kmmoyplus;
	float litres;
	float depensefinal;
	
	// Au d�part le co�t est de 0 et il augmentera
	depense = 0;
	depense1 = 0;
	// Demander � l'utilisateur le nombre de jours de location de la voiture
	
	cout << "Bonjour !" << endl << "Bienvenu au logiciel de calcul des d�penses pour un voyage en automobile !" << endl; // Message de bienvenu
	
	cout << "Veuillez ins�rer le nombre de jours pendant lequel vous louerez la voiture: ";
	cin >> jour;
	// Calcul du co�t pour le nombre de jour et stockage dans la variable depense.
	depense = jour * 45;
	
	// Demander le nombre de km parcouru par jour en moyenne.

	cout << "Veuillez ins�rer le nombre de Kilom�tres parcourus au total: ";
	cin >> km;
	// calculer la moyenne des kilom�tres
	kmmoy = km / jour;
	// Si la moyenne d�passe 250 on charge sinon on ne change pas le prix.
	if (kmmoy > 250)
	{
		kmmoyplus = kmmoy - 250; // On soustrait les km gratuit pour avoir la moyenne des km extra.
		depense1 = depense + (0.05 * kmmoyplus); // Rajouter le surplus � la valeur d�pense.
		cout << "Avec vos kilom�tres suppl�mentaire votre facture est maintenant de " << depense1 << " $." << endl;// Affiche la facture temporaire
	}
	else
	{
		cout << "Pas de kilom�tre suppl�mentaire. Vous ne serez pas chargez plus." << endl; // Message d'avertissement
		cout << "Votre facture est maintenant de " << depense << " $." << endl; // Facture temporaire
	}

	cout << "Calcul du prix du gas veuillez patientez..." << endl; // Message inutile au programme seulement pour l'utilisateur
	litres = 7.6 *(km / 100); // Calcul les litres au 100km
	

	if (depense1 > depense)
	{
		depensefinal = depense1; // D�terminer le prix final au m�me que depense1
		depensefinal = depense1 + litres * 1.25; // Recalcule la d�pense final avec le prix du gas
		cout << "Votre facture s'�l�ve � " << depensefinal << " $. ";
	}
	else
	{
		depensefinal = depense; // D�terminer le prix final au m�me que depense
		depensefinal = depense + litres * 1.25; // Recalcule la d�pense final avec le prix du gas
		cout << "Votre facture s'�l�ve � " << depensefinal << " $. "; // Affiche le montant final de la facture
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
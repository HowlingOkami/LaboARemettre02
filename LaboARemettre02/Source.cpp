//But: Écrire un programme pour calculer le montant qu’un individu devra débourser pour faire un voyage dans une automobile louée. 
//L’algorithme tient compte du kilométrage parcouru et de la durée du voyage qui sont soumises par le requérant.
//Auteur: Thomas Berube
//Date: 17/09/2020


#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	//Declaration des variables
	float nb1; //duree du voyage en jour
	float nb2; // Distance du voyage
	float nb3; //nombre de km gratuit
	float nb4; //cout de location total
	float nb5; //litres de gas necessaire
	float nb6; //prix du gas
	float nb7; //prix du km d'extra
	float nb8; //km d'extra
	float nb9; //Prix total

	//Voir le prix pour la duree seulement
	std::cout << " Veuillez rentrer la duree en jours du voyage ";
	std::cin >> nb1;
	std::cout << " Veuillez rentrer la distance en Km du voyage ";
	std::cin >> nb2;

	nb3 = nb1 * 250;
	nb5 = nb2 * 0.076;
	nb4 = nb1 * 45;
	nb6 = nb5 * 1.25;
	nb8 = nb2 - nb3;
	
	if (nb1 >= 1 && nb2 >= 1)
	{

	
	//Mesurer prix du km extra
	if (nb8 > 0)
	{
		nb7 = ((nb2 - nb3) * 0.05);
		
	}
	else
	{
		nb7 = 0;
	}
	
	nb9 = (nb4 + nb6 + nb7);



	std::cout << "nombre de KM gratuit = " << nb3 << " KM" << std::endl;
	std::cout << "Prix de la location seul = " << nb4 << " $" << std::endl;
	std::cout << "Nombre de litres necessaire = " << nb5 << " L" << std::endl;
	std::cout << " Prix de l'essence = " << nb6 << " $ " << std::endl;
	std::cout <<  " Cout extra du km" << nb7 << " $ " << std::endl;
	std::cout << " Le prix total est de " << nb9 << " $ " << std::endl;
}
	else
	{
		std::cout << "Erreur, veullier rentrer des valeurs positives ou a valeur minimale de 1";
	}
	/*
	plan de test
	jour	distance	resultat tot
	10		250			464.25
	1		1			45.095
	0		1			Erreur, veullier rentrer des valeurs positives ou a valeur minimale de 1
	0		0			Erreur, veullier rentrer des valeurs positives ou a valeur minimale de 1
	-5		-4			Erreur, veullier rentrer des valeurs positives ou a valeur minimale de 1
	
	*/
	return 0;
}

//But: �crire un programme pour calculer le montant qu�un individu devra d�bourser pour faire un voyage dans une automobile lou�e. 
//L�algorithme tient compte du kilom�trage parcouru et de la dur�e du voyage qui sont soumises par le requ�rant.
//Auteur: Thomas Berube
//Date: 17/09/2020

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	//Declaration des variables
	int nb1; //duree du voyage en jour
	int nb2; // Distance du voyage
	int nb3; //nombre de km gratuit
	int nb4; //cout de location total
	int nb5; //litres de gas necessaire
	int nb6; //prix du gas
	int nb7; //prix du km d'extra
	int nb8; //km d'extra
	int nb9; //Prix total

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

	return 0;
}
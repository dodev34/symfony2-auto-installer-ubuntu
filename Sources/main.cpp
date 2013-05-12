#include <iostream>
#include <string>
#include <stdlib.h>
#include "../Classes/Installer.cpp"

using namespace std;

int main()
{
	Installer Sf; //Création de l'objet download
	std::string folder_installation;
	std::string symfony_version;

	// Renseignement du dossier d'installation.
	cout << "Please, enter folder root for Symfony ~ ex : MyProjectSf " << endl;
	cin >> folder_installation;
	// Renseignement de la version Sf
	cout << "Please, enter Symfony 2 version ~ ex : " << Sf.getSymfonyVersion() << endl;
	cin >> symfony_version;
	Sf.setSymfonyVersion(symfony_version);

	// Téléchargement de composer.
	Sf.getComposer();
	// Installation du dossier Sf
	Sf.getSymfony(folder_installation);

	return 0;
}
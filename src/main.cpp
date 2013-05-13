#include <iostream>
#include <string>
#include <stdlib.h>
#include "M12U/Installer/Installer.cpp"
#define couleur(param) printf("\033[%sm",param)


using namespace std;

int main()
{
	Installer Sf; //Création de l'objet download
	std::string folder_installation;
	std::string symfony_version;

	// Renseignement du dossier d'installation.
	couleur("32");
	printf("Please, enter folder root for Symfony, exemple ");
	couleur("34");
	printf("[ ~/sfprojects/my_project ] : ");
	couleur("0");
	cin >> folder_installation;

	// Renseignement de la version Sf
	couleur("32");
	printf("Please, enter Symfony 2 version, exemple ");
	couleur("34");
	printf("[ 2.2.1 ] : ");
	couleur("0");	
	cin >> symfony_version;
	Sf.setSymfonyVersion(symfony_version);

	// Téléchargement de composer.
	Sf.getComposer();
	// Installation du dossier Sf
	Sf.getSymfony(folder_installation);
	// Up
	Sf.addComposerToSfProject();

	return 0;
}
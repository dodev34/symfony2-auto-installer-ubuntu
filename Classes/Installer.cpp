#include "Installer.h"
#include <stdio.h>
#include <sstream>

using namespace std;

/**
 * Constructeur
 */
Installer::Installer()
{
	symfony_repository = "symfony/framework-standard-edition ";
	symfony_version    = "2.1.1";
}

/**
 * Retourne le repository de Git du projet symfony
 */
std::string Installer::getSymfonyRepository()
{
	return this->symfony_repository;
}

/**
 * Retourne la dernière version de symfony
 */
std::string Installer::getSymfonyVersion()
{
	return this->symfony_version;
}

void Installer::setSymfonyVersion(string version)
{
	this->symfony_version = version;
}

/**
 * Téléchargement du fichier composer..
 */
void Installer::getComposer()
{
	system("curl -sS https://getcomposer.org/installer | php");
}

void Installer::getSymfony(string folder)
{
	std::string composer = "php composer.phar create-project ";
	composer            += symfony_repository + " " + folder + "/" + symfony_version.c_str();
	this->folder_root    = composer;

	system(composer.c_str());
}

std::string Installer::getFolderRoot()
{
	return this->folder_root;
}

void Installer::addComposerToSfProject()
{
	std::string folder = "cd "+ folder_root +"; curl -sS https://getcomposer.org/installer | php";

	system(folder.c_str());
}
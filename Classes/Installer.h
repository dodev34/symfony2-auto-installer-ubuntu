#ifndef DEF_INSTALLER
#define DEF_INSTALLER

#include <string>
#include <sstream>

class Installer
{
	public:
		
		/**
		 *
		 */
		Installer();

		/**
		 *
		 */		
		std::string getSymfonyRepository();

		/**
		 *
		 */		
		std::string getSymfonyVersion();

		/**
		 *
		 */
		void setSymfonyVersion(std::string version);

		/**
		 *
		 */
		void getComposer();

		/**
		 *
		 */		
		void getSymfony(std::string folder);

		/**
		 *
		 */
		void addComposerToSfProject();

		/**
		 *
		 */
		std::string getFolderRoot();

		void setFolderRoot(std::string path);

	private:
		
		std::string symfony_repository;
		std::string folder_root;
		std::string symfony_version;  
};

#endif
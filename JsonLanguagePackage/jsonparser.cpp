#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main() {

	string line,change;
	
	cout<<"Please, Enter change string.\n";
	cin>>change;
	
	ofstream fileW("data_x.json");
	ifstream fileR2("Language.json");
	ifstream fileR("LanguagePackage.json");
	
	
	while(getline(fileR,line)){
		if(line==change){
			getline(fileR2,line);
			fileW<<line<<"\n";
		}
		else if(line!="{" || line!="},")
			fileW<<line<<"\n";
		else
			fileW<<line<<"\n";
	}
	
	
	fileR.close();
	fileW.close();
	
	cout<<"Output data_x.json. Please change x with country's first letter"
	
	return 0;
}


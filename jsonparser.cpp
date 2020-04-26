#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;


int main() {

	string line;
	
	ofstream fileW("data2.js");
	ifstream fileR("data.js");
	
	int sayac=0;
	
	
	while(getline(fileR,line)){
		if(line=="change"){
			fileW<<"\"id\""<<": "<<sayac<<",\n";
			sayac++;
		}
		else if(line!="{" || line!="},")
			fileW<<line<<"\n";
		else
			fileW<<line<<"\n";
	}
	
	
	fileR.close();
	fileW.close();
	
	return 0;
}


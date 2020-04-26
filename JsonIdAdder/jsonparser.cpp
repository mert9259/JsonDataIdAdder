#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;


int main() {

	string line,change;
	
	ofstream fileW("data2.json");
	ifstream fileR("data.json");
	
	int sayac=0;
	
	cout<<"Please, Enter change string\n";
	cin>>change;
	
	
	while(getline(fileR,line)){
		if(line==change){
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


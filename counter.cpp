#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int letters = 0, words = 0, lines = 0, nums = 0, dunno = 0; 
int &lett = letters;
bool num, word;
string line;
char ww = 'w', nn = 'n', dd = 'd';

char what( char * token) {
for(int j=0;j<strlen(token);j++) {
				if(isalpha(token[j])) word=true;
				else {
					word=false;
					j=strlen(token);
				}
			}
		if(word==true & num==false) return ww;
for(int j=0;j<strlen(token);j++) {
				if(isdigit(token[j])) num=true;
				else {
					num=false;
					j=strlen(token);
				}	
			}
		if(num==true & word==false) return nn;
	if(num==true & word==true) return dd;
	if(num==false & word==false) return dd;
}
void hletter(char * token , int& letters) {
  for(int j=0;j<strlen(token);j++) {
    if(isalpha(token[j])) ++letters;	
  }
}
int main(int argc, char* argv[]) {
  char *file = *++argv;
  string filename=file;
  ifstream file(filename);
  while (getline(file,line)) {
	  char chsor[line.length()];
	  for (int i=0;i<line.length();i++) {
		  chsor[i]=line.at(i);
	  }
	  char * token;
	  token = strtok(chsor,",. -");
	
	  while(token!=NULL) {
		cout<<token<<endl;
	if(what(token)==nn)
		++nums;
	if(what(token)==ww)
		++words;
	if(what(token)==dd)
		++dunno;
		hletter(token,letters);
		token=strtok(NULL,",. -");
}
++lines;
}
  cout<<"Number of letters: "<< letters <<"\n";
  cout<<"Number of words: "<< words <<"\n";
	cout<<"Number of lines: "<< lines <<"\n";
	cout<<"Number of numbers: "<< numbers <<"\n";
	cout<<"Number of unidentified objects: "<< dunno <<"\n";
}

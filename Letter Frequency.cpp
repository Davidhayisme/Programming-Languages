//David Hay and Elena Boyer
// 2/10/23
// This program reads in a file of the user's choice and gets each
// likelihood of each character based on the amount in the file
#include <iostream>
#include <fstream>
#include <cctype>
#include <algorithm>
using namespace std;
int Check(char);

int main(){
	//Initialize counters and variables
    string fileName;
	int filecounter = 1;
	int lettercounter = 0;
	int * letters = new int[26];
	// Make the letters array's indices have a default value 
	for(int i=0; i < 26; i++){
		letters[i] = 0;
		//printf("%d",letters[i]);
}	
//Get filename & open the file
    cout << "Enter your text file name here:";
    cin >> fileName;
    fstream newFile;
    newFile.open(fileName, ios::in);
	//Check if file is open
    if(newFile.is_open())
    {
		//Go through character by character
        char stuff;
		while(newFile.get(stuff)){
			//Check if it is a letter
			if(isalpha(stuff) != 0){
				//counter for letter
					lettercounter++;
					int h = Check(stuff);
					//Incrementing the array
					letters[h]++;
					//cout << "|";
			}
			//Line counter
			else if(stuff == '\n'){
				filecounter++;
			}
		}
				//cout << stuff << "\n"; //print the data of the string
			//}
        newFile.close(); //close the file object.
	}
	//It is not very efficient but it does the job
	/*
	for(int i = 0; i < 26; i++){
		for(int k = 0; k < 26;k++){
			if(k < 26){
				if(letters[k+1] > letters[k]){
					int temp = letters[k];
					letters[k] = letters[k+1];
					letters[k+1] = temp;
				}
			}
		}
	}
	*/
	//Printing
	printf("Number of lines: %d \n",filecounter);
	printf("Total number of letters: %d \n",lettercounter);
	//Getting the percentages and printing them
	for(int i = 97; i < 123; i++) {
		int display = i-96;
		char l = char(i);
		double hope = ((double)letters[i-97]/lettercounter)*100;
		printf("%d. %c: %d/ %% %.2f \n",display,l,letters[i-97],hope);
	}
};
//Getting the value of the character
int Check(char c){
	//printf("AHHHHHH");
	if(isupper(c))
		c = tolower(c);
	return(int(c)-97);
}

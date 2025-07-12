// 2. Count the frequency of each vowel in a given paragraph.
#include<iostream>
using namespace std;

void countVowelFrequency(string str){
    int countA=0, countE=0, countI=0, countO=0, countU=0;
    int i=0;

    while(str[i]!='\0'){
        char c = tolower(str[i]);
        if(c=='a'){
            countA++;
        }
        else if (c=='e'){
            countE++;
        }
        else if (c=='i'){
            countI++;
        }
        else if (c=='o'){
            countO++;
        }
        else if (c=='u'){
            countU++;
        }
        i++;
    }
    cout << "Frequency of A, E, I, O & U are: " << countA << ", " << countE << ", " << countI << ", " << countO << ", " << countU << endl;
}

int main(){
    string str;
    getline(cin, str);
    cout << str;
    cout << endl;
    countVowelFrequency(str);
}
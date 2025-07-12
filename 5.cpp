// 5. Input a sentence and count the number of words, digits, and special characters.
#include<iostream>
using namespace std;

void count(string str){
    int words=0, digits=0, specialCharacters=0;
    for(int i=0;i<str.length();i++){
        char c = str[i];
        if(c>='0' && c<='9'){
            digits++;
        }
        else if(c==' '){
            if(i>0 && str[i-1]!=' ')
                words++;
        }
        else if (tolower(c)>='a' && tolower(c)<='z'){}
        else{
            specialCharacters++;
        }
    }
    if(str.length() > 0 && str[str.length() - 1] != ' '){
        words++;
    }
    cout << "Words: " << words << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special Characters: " << specialCharacters << endl;
}

int main(){
    string str;
    getline(cin, str);
    cout << endl;
    count(str);
}
// 12. Find the longest word in a given string.
#include<iostream>
using namespace std;

void findLongestWord(string str){
    int current=0, maxLength=0, startIndex=0;
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            current++;
        }
        else{
            if(current>maxLength){
                maxLength=current;
                startIndex=i-current;
            }
            current=0;
        }
    }

    cout << "Longest word: " << str.substr(startIndex, maxLength);
}

int main(){
    string str;
    getline(cin, str);
    cout << endl;
    findLongestWord(str);
}
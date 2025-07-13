// 13. Reverse the words in a sentence without reversing characters inside the words.
#include<iostream>
using namespace std;

string reverseWords(string str){
    string reverse, word;
    int len = str.length();
    int wordLength=0;
    for(int i=len-1; i>=0;i--){
        wordLength++;
        if((str[i]== ' ' && str[i+1]!=' ')){
            word = str.substr(i+1,wordLength);
            reverse.append(word);
            reverse.append(" ");
            wordLength=0;
        }
        else if(i==0){
            word = str.substr(i,wordLength);
            reverse.append(word);
        }
    }
    return reverse;
}

int main(){
    string str;
    getline(cin, str);
    cout<< reverseWords(str);
}
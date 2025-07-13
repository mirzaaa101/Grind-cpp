// 10. Convert the first letter of every word in a sentence to uppercase.
#include<iostream>
using namespace std;

string convertToUpper(string str){
    int len = str.length();
    if(str[0] !=' '){
        str[0]=toupper(str[0]);
    }
    for(int i=1;i<len;i++){
        if(str[i-1]==' ' && str[i]!=' '){
            str[i]=toupper(str[i]);
        }
    }
    return str;
}

int main(){
    string str;
    getline(cin,str);
    cout << endl;
    cout << convertToUpper(str);
}
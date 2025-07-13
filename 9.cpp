// 9. Remove all duplicate characters from a string without using extra space.
#include<iostream>
using namespace std;

string removeDuplicates(string str){
    int len = str.length();
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;){
            if(str[j]==str[i]){
                for(int k=j;k<len-1;k++){
                    str[k]=str[k+1];
                }
                len--;
            }
            else{
                j++;
            }
        }
    }
    return str.substr(0, len);
}

int main(){
    string str;
    getline(cin,str);
    cout << endl;
    cout << removeDuplicates(str);
}
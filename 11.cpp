// 11. Check if two strings are anagrams of each other.
#include<iostream>
#include<algorithm>
using namespace std;

string areAnagrams(string str1, string str2){
    if(str1.length() != str2.length()){
        return "No";
    }

    for(int i=0;i<str1.length();i++){
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1!=str2){
        return "No";
    }
    return "Yes";
}

int main(){
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    cout << areAnagrams(str1, str2);
}
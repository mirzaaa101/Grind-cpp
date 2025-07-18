// 30. Store information for n students (name, ID, CGPA) using struct, then sort by CGPA.
#include<iostream>
using namespace std;

struct Student{
    string name;
    int id;
    double cgpa;
};

bool compareByCGPA(Student a, Student b){
    return a.cgpa>b.cgpa;
}

int main(){
    int size;
    cout << "Enter the student dataset size: ";
    cin >> size;
    struct Student s[size];
    cin.ignore();

    for(int i=0;i<size;i++){
        cout << "Enter student no- " << i+1 << " name: ";
        getline(cin, s[i].name);

        cout << "Enter ID: ";
        cin >> s[i].id;

        cout << "Enter CGPA: ";
        cin >> s[i].cgpa;
        cin.ignore();
    }
    sort(s, s+size, compareByCGPA);
    cout << "Sorted by CGPA: " << endl;
    for(int i=0;i<size;i++){
        cout << "ID: " << s[i].id << " || Name: " << s[i].name << " || CGPA: " << s[i].cgpa << endl;
    }
}
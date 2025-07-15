// 21. Solve the Tower of Hanoi problem and display the steps.
#include<iostream>
using namespace std;

void towerOfHanor(int disks, char from, char to, char aux){
    if(disks==0) return;
    towerOfHanor(disks-1, from, aux, to);
    cout << "Disk " << disks << " from " << from << " to " << to << endl;
    towerOfHanor(disks-1, to, aux, from);
}

int main(){
    int disks = 4;
    towerOfHanor(disks, 'A', 'B', 'C');
}
#include <iostream>
using namespace std;
int main() {
//get user input for scount
    cout << "how many side: ";
    int scount;
    cin >> scount;
    cout << "\n";
    //check if the input is between 2-4
    while (scount < 2 || scount > 4){
        cout << "enter a number between 2-4:";
        cin >> scount;
        cout << "\n";
    }
//get user input for name and cars for each side
string name[scount];
int cars[scount];
    for (int i = 0;i < scount;){
        cout <<"name the traffic light number "<<i+1<<": eg. N, North etc..  ";
        cin >> name[i];
        cout << "\n";
        cout <<"How many cars in traffic light "<<name[i]<<"? ";
        cin >> cars[i];
        cout << "\n";
        i++;
    }

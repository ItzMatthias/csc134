/*
CSC 134
M1T2
Matthias Kleckley
1/22/24
*/

#include <iostream>
using namespace std;

int main() {
    cout<< "Hello World!"<< endl;
    cout<<" My Name is Matthias Kleckley"<<"\n";
    cout<< "I Just statred fighting at a local MMA gym"<< endl;

    //Ask a question
    string fighter;
    cout<< "Who is your favorite MMA fighter? ";
    cin>> fighter ;
    
    cout << "Cool! I've heard alot about " << fighter << endl;

    cout << endl<< endl;
    return 0;
}

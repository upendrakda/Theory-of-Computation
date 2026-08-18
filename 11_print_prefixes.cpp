// Program to print all prefixes of a given string

#include <iostream>
#include <cstdlib>
using namespace std;

void GetPrefix(string a){
    int i, j;

    for(j = 0, i = 1; i <= a.length(); i++){
        cout << a.substr(j,i) << endl;
    }
}

int main(){
    system("cls");

    string a = "computer";

    GetPrefix(a);

    return 0;
}
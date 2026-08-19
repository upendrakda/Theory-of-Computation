// Program to print all suffixes of a given string

#include <iostream>
#include <cstdlib>
using namespace std;

void GetSuffix(string a){
    int j;

    for(j = a.length() - 1; j >= 0; j--){
        cout << a.substr(j) << endl;
    }
}

int main(){
    system("cls");

    string a = "computer";

    GetSuffix(a);

    return 0;
}
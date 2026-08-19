// Program to concatenate a prefix of one string with a suffix of another string

#include <iostream>
#include <cstdlib>
using namespace std;

string GetPrefixSuffix(string a, string b, int l){
    string prefix = a.substr(0, l);
    int lb = b.length();
    string suffix = b.substr(lb - l);

    return (prefix + suffix);
}

int main(){
    system("cls");

    string a = "apple",
           b = "cider";
    int l = 3;

    cout << GetPrefixSuffix(a, b, l);

    return 0;
}
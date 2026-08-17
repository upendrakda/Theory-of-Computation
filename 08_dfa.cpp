// WAP C++ Program to implement DFA
// Question: Design a machine to accept strings whose binary value is divisible by 2.

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {

    system("cls");

    // Transition Table
    //        Input: 0  1
    int TransitionTable[3][2] = {
        {2, 1},    // S0
        {2, 1},    // S1
        {2, 1}     // S2
    };

    int StartingState = 0;
    int AcceptingState = 2;
    int State = StartingState;

    string w = "0111111110";

    cout << "Initial State: S" << StartingState << endl;

    cout << "\n";
    cout << "------------------------------------------------------\n";
    cout << " Current State    Input    Next State\n";
    cout << "------------------------------------------------------\n";

    for (int i = 0; i < w.length(); i++) {

        int CurrentState = State;
        int Input = w[i] - '0';

        State = TransitionTable[State][Input];

        cout << "      S" << CurrentState
             << "              " << Input
             << "          S" << State << endl;
    }

    cout << "------------------------------------------------------\n";

    cout << "\nFinal State: S" << State << endl;

    if (State == AcceptingState) {
        cout << "\nString " << w << " is Accepted !!!" << endl;
    }
    else {
        cout << "\nString " << w << " is Rejected !!!" << endl;
    }

    return 0;
}
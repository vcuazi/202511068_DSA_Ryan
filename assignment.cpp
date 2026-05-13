#include<iostream>
using namespace std;

int main() {
    int n = 7;
    int input;
    int attempts[100];
    int count = 1;
    int a = 0;

    cout << "enter the number of your choice:" << endl;
    cin >> input;
    attempts[a] = input;

    while (input != n) {
        if (input > n) {
            cout << "Too high ";
        } else {
            cout << "Too low ";
        }

        cout << "Enter another number:" << endl;
        cin >> input;

        a = a + 1;
        attempts[a] = input;
        count = count + 1;
    }

    if (input == n) {
        cout << "Correct" << endl;
    }

    cout << "All inserted numbers:" << endl;

    for (a = 0; a < count; a++) {
        cout << attempts[a] << endl;
    }

    return 0;
}

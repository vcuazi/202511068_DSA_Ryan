#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of family members:" << endl;
    cin >> n;

    int age[n];
    string name[n];
    int low =0;
    int high = n-1;
    int middle;
    bool found = false;


    // Input names and ages
    for (int i = 0; i < n; i++) {
        cout << "Enter the name of member " << (i + 1) << ":" << endl;
        cin >> name[i];

        cout << "Enter the age of member " << (i + 1) << ":" << endl;
        cin >> age[i];
    }

    // Bubble Sort (sorting names in ascending order)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            if (name[j] > name[j + 1]) {

                // Swap names
                string tempName = name[j];
                name[j] = name[j + 1];
                name[j + 1] = tempName;

                // Swap ages also
                int tempAge = age[j];
                age[j] = age[j + 1];
                age[j + 1] = tempAge;
            }
        }
    }

    // Display sorted data
    cout << "\nFamily members in alphabetical order:\n";

    for (int i = 0; i < n; i++) {
        cout << name[i] << " - " << age[i] << " years" << endl;
    }

    // Binary Search
    string target;
    cout << "\nEnter the name of the member to search:" << endl;
    cin >> target;

    while(low<=high){
        middle = (low + high) / 2;
        if (name[middle] == target) {
            cout << "Member found at index " << middle << endl;
            cout<<"Name: "<<name[middle]<<" Age: "<<age[middle]<<endl;
            break;
        } else if (name[middle] < target) {
            low = middle + 1;
        } else {
            high = middle - 1;
        }
    }
    if(!found){
        cout << "Member not found." << endl;
    }

    return 0;
}
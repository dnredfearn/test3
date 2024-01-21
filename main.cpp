//Destinee Redfearn
//July 21, 2023
/*This program prompts the user to enter a string 
and displays all its permutations.*/

#include <iostream>
#include <string>

using namespace std;

// Function prototypes
void displayPermutation(const string& s);
void displayPermutation(const string& s1, const string& s2);

// Wrapper function to start the permutation process
void displayPermutation(const string& s) {
    displayPermutation("", s);
}

// Recursive function to generate permutations
void displayPermutation(const string& s1, const string& s2) {
    // Base case: If s2 is empty, we have generated a permutation
    // and we can print s1 to the console
    if (s2.empty()) {
        cout << s1 << endl;
        return;
    }

    // Iterate through each character in s2
    for (size_t i = 0; i < s2.length(); ++i) {
        // Choose a character from s2 and add it to s1 to create a new permutation
        string newS1 = s1 + s2[i];
        // Create a new string (newS2) without the character we just chose from s2
        string newS2 = s2.substr(0, i) + s2.substr(i + 1);
        // Recursively call the function with the updated s1 and s2
        displayPermutation(newS1, newS2);
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    cout << "Permutations:" << endl;
    displayPermutation(input);

    return 0;
}

// Name - Arman Majhi
// PRN - 24070123022
// Batch - EnTC - A1 

#include<iostream>
using namespace std;

int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;
    
    if (character == 'a' || character == 'e' || character == 'i' || 
        character == 'o' || character == 'u' || character == 'A' || 
        character == 'E' || character == 'I' || character == 'O' || character == 'U') {
        cout << character << " is a vowel.";
    }
    else if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        cout << character << " is a consonant.";
    }
    else {
        cout << character << " is not an alphabet.";
    }

    return 0;
}

//output
/*
Enter a character: i
i is a vowel.

=== Code Execution Successful ===
/*

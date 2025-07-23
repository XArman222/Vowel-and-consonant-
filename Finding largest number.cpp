// Name - Arman Majhi
// PRN - 24070123022
// Batch - EnTC - A1 

#include <iostream>
using namespace std;
int main() {
    
    int num1 , num2 , num3;
    cout << "Please Enter the First number : ";
    cin >> num1;
    cout << "Please Enter the Second number : ";
    cin >> num2;
    cout << "Please Enter the Third number : ";
    cin >> num3;
    
    
    if(num1 >= num2 && num1 > num3) cout << "The number " <<num1 << " Is the largest";
    else if(num2 > num1 && num2 >= num3) cout << "The number " <<num2 << " Is the largest";
    else if(num3 >= num1 && num3 > num2) cout << "The number " <<num3 << " Is the largest";
    else if(num2 == num1 && num2 == num3) cout << "All The numbers are equal ";
    return 0;
}

//output
/*
Please Enter the First number : 89
Please Enter the Second number : 42
Please Enter the Third number : 91
The number 91 Is the largest

=== Code Execution Successful ===
/*

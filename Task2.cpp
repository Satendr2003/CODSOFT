#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout << "Enter the value of First Operand: ";
    cin >> a;

    cout << "Enter the value of Second Operand: ";
    cin >> b;

    cout<<" 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Modulus";
    cout<<"\n Example: Enter the operation to perform :  1 ";
    cout << "\n Enter the Operation to Perform: ";
    cin >> op;

   
    switch (op)
    {
    case '1':
        cout << "Additon of two Operand is: " << (a + b) << endl;
        break;

    case '2':
        cout << "Subtraction of two Operand is: " << (a - b) << endl;
        break;

    case '3':
        cout << "Multiplication of two Operand is: " << (a * b) << endl;
        break;

    case '4':
        cout << "Divide of two Opeand is: " << (double(a / b)) << endl;
        break;

    case '5':
        cout << "Remainder of two operand is: " << (a % b) << endl;
        break;
    default : 
        cout<<" Incorrect Input for operation! See Example and Try Less than 6 Number";
       
    }
}


  

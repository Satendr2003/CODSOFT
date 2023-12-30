#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

    cout << "\n\t\t--------------------Welcome to the number Guessing Game-----------------------\n"
         << endl;
    cout << "\n\t\t>>>>>>>>>  You will have to guess a number between 1 to 100  <<<<<<<<<<<";
    cout << "\n\t\t>>>>>>>>>      Lets Start Playing and Good Luck     <<<<<<<<<<<<<" << endl;

    srand(time(0));
    int randNumber = (rand() % 100) + 1;

    cout << "\n You will have total 7 chances to guess the correct number\n";
    int chanceLeft = 7;
    int playerInput;

    for (int i = 1; i <= 7; i++)
    {
        cout << "\n Enter the number: ";
        cin >> playerInput;

        if (playerInput == randNumber)
        {
            cout << "\n Wow !! You have successfully guessed the right number\n";
            cout << "\n I hope you enjoyed the game..... Come soon to enjoy the game\n";
            break;
        }
        else
        {
            if (playerInput > randNumber)
            {
                cout << "\n"
                        "Enter the Smaller number...Try Again"
                        ""
                     << endl;
            }
            else
            {
                cout << "\n"
                        "Enter the Larger number...Try Again"
                        ""
                     << endl;
            }
        }

        chanceLeft--;
        cout << "\n( Chances to Left to guess the Random number: " << chanceLeft << ")" << endl;

        if (chanceLeft == 0)
        {
            cout << "\n  You have exceed your limits to guessing the numbers \n"
                 << endl;
            cout << "\n The random number was " << randNumber << endl;
            cout << "\n Thanks for Playing Have a Nice day";
        }
    }
    cout << "\n";
    return 0;
}

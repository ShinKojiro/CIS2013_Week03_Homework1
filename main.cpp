#include <iostream>

using namespace std;

int main(){
    char playerOneChoice, playerTwoChoice, playAgain = 'y';
    
    cout << "Welcome to Rock-Paper-Scissors!" << endl
    << "Enter (R)ock, (P)aper or (S)cissors for your choices.\n" << endl;
    
    while(playAgain == 'y' || playAgain == 'Y'){
        cout << "Player One, choose your throw! - ";
        cin >> playerOneChoice;
        cout << endl << "Player Two, choose your throw! - ";
        cin >> playerTwoChoice;
        cout << endl;

        switch(playerOneChoice){
            case 'P':
            case 'p':
                switch(playerTwoChoice){
                    case 'p':
                    case 'P':
                        cout << "Tied, Paper vs Paper!" << endl;
                    break;
                    case 's':
                    case 'S':
                        cout << "Player Two's Scissors Sliced through player One's paper!" << endl;
                    break;
                    case 'r':
                    case 'R':
                        cout << "Player One's Paper wraps up Player Two's rock nice and good!" << endl;
                    break;
                    default:
                        cout << "Player Two didn't chose a valid option!" << endl
                        << "R for Rock." << endl << "P for Paper" << endl << "S for Scissors" << endl;
                }
                /*if(playerTwoChoice == 'p' || playerTwoChoice == 'P'){
                    cout << "Tied, Paper vs Paper!" << endl;
                }
                else if(playerTwoChoice == 's' || playerTwoChoice == 'S'){
                    cout << "Player Two's Scissors Sliced through player One's paper!" << endl;
                }
                else if(playerTwoChoice == 'r' || playerTwoChoice == 'R'){
                    cout << "Player One's Paper wraps up Player Two's rock nice and good!" << endl;
                }*/
            break;
            case 's':
            case 'S':
                switch(playerTwoChoice){
                    case 's':
                    case 'S':
                        cout << "Tied, Scissors vs Scissors!" << endl;
                    break;
                    case 'p':
                    case 'P':
                        cout << "Player One turned Player Two's Paper into tiny pieces!" << endl;
                    break;
                    case 'r':
                    case 'R':
                        cout << "Player Two Rock bends poor Player One scissors out of shape!" << endl;
                    break;
                    default:
                        cout << "Player Two didn't chose a valid option!" << endl
                        << "R for Rock." << endl << "P for Paper" << endl << "S for Scissors" << endl;
                }
                /*if(playerTwoChoice == 's' || playerTwoChoice == 'S'){
                    cout << "Tied, Scissors vs Scissors!" << endl;
                }
                else if(playerTwoChoice == 'p' || playerTwoChoice == 'P'){
                    cout << "Player One turned Player Two's Paper into tiny pieces!" << endl;
                }
                else if(playerTwoChoice == 'r' || playerTwoChoice == 'R'){
                    cout << "Player Two Rock bends poor Player One scissors out of shape!" << endl;
                }*/
            break;
            case 'r':
            case 'R':
                switch(playerTwoChoice){
                    case 'r':
                    case 'R':
                        cout << "Tied, Rock vs Rock!" <<endl;
                    break;
                    case 's':
                    case 'S':
                        cout << "Player One's Rock made Player Two's Scissors fubar!" << endl;
                    break;
                    case 'p':
                    case 'P':
                        cout << "Player Two's Paper erased Player One's Rock from existance!" << endl;
                    break;
                    default:
                        cout << "Player Two didn't chose a valid option!" << endl
                        << "R for Rock." << endl << "P for Paper" << endl << "S for Scissors" << endl;
                }
                /*if(playerTwoChoice == 'r' || playerTwoChoice == 'R'){
                    cout << "Tied, Rock vs Rock!" <<endl;
                }
                else if(playerTwoChoice == 's' || playerTwoChoice == 'S'){
                    cout << "Player One's Rock made Player Two's Scissors fubar!" << endl;
                }
                else if(playerTwoChoice == 'p' || playerTwoChoice == 'P'){
                    cout << "Player Two's Paper erased Player One's Rock from existance!" << endl;
                }*/
            break;
            default:
                cout << "Player One didn't choose a valid option!" << endl 
                << "R for Rock." << endl << "P for Paper" << endl << "S for Scissors" << endl;
        }

        cout << "\n\nDo you want to play again? ";
        cin >> playAgain;
    }

    cout << "\nThank you for playing!";
}
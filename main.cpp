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

        switch(playerOneChoice){
            case 'P':
            case 'p':
                if(playerTwoChoice == 'p' || playerTwoChoice == 'P'){
                    cout << "Tied, Paper vs Paper!";
                }
                else if(playerTwoChoice == 's' || playerTwoChoice == 'S'){
                    cout << "Player Two's Scissors Sliced through player One's paper!";
                }
                else if(playerTwoChoice == 'r' || playerTwoChoice == 'R'){
                    cout << "Player One's Paper wraps up Player Two's rock nice and good!";
                }
            break;
            case 's':
            case 'S':
                if(playerTwoChoice == 's' || playerTwoChoice == 'S'){
                    cout << "Tied, Scissors vs Scissors!";
                }
                else if(playerTwoChoice == 'p' || playerTwoChoice == 'P'){
                    cout << "Player One turned Player Two's Paper into tiny pieces!";
                }
                else if(playerTwoChoice == 'r' || playerTwoChoice == 'R'){
                    cout << "Player Two Rock bends poor Player One scissors out of shape!";
                }
            break;
            case 'r':
            case 'R':
                if(playerTwoChoice == 'r' || playerTwoChoice == 'R'){
                    cout << "Tied, Rock vs Rock!";
                }
                else if(playerTwoChoice == 's' || playerTwoChoice == 'S'){
                    cout << "Player One's Rock made Player Two's Scissors fubar!";
                }
                else if(playerTwoChoice == 'r' || playerTwoChoice == 'R'){
                    cout << "Player Two's Paper erased Player One's Rock from existance!";
                }
            break;
            default:
                cout << "No valid letter was entered." << endl 
                << "R for Rock." << endl << "P for Paper" << endl << "S for Scissors" << endl;
        }

        cout << "\n\nDo you want to play again? ";
        cin >> playAgain;
    }

}
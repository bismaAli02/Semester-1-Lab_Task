#include <iostream>
using namespace std;
int main()
{
    string player1, player2;
    cout << "PLayer1 turn: ";
    cin >> player1;
    cout << "PLayer2 turn: ";
    cin >> player2;
    if (player1 == player2)
    {
        cout << "Its a draw";
    }
    else
    {
        if (player1 == "Rock" || player1 == "rock")
        {
            if (player2 == "Paper" || player2 == "paper")
            {
                cout << "Player2 is winner";
            }
            else if (player2 == "Scissors" || player2 == "scissors")
            {
                cout << "Player1 is winner";
            }
        }
        if (player1 == "Paper" || player1 == "paper")
        {
            if (player2 == "Rock" || player2 == "rock")
            {
                cout << "Player1 is winner";
            }

            else if (player2 == "Scissors" || player2 == "scissors")
            {
                cout << "Player2 is winner";
            }
        }
        if (player1 == "Scissors" || player1 == "scissors")
        {
            if (player2 == "Rock" || player2 == "rock")
            {
                cout << "Player2 is winner";
            }
            if (player2 == "Paper" || player2 == "paper")
            {
                cout << "Player1 is winner";
            }
        }
    }
}
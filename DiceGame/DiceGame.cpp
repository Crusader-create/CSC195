#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDie() {
    return rand() % 6 + 1;
}

int main() {

    int score1 = 0, score2 = 0;

    srand(time(0));


    cout << "\n--- Dice Rolling Game ---\n";

    for (int round = 1; round <= 5; round++) {
        cout << "\nRound " << round << ":\n";

        int roll1 = rollDie() + rollDie();
        int roll2 = rollDie() + rollDie();

        cout << "player 1" << " rolls a total of : " << roll1 << endl;
        cout << "player 2" << " rolls a total of: " << roll2 << endl;

        if (roll1 > roll2) {
            score1++;
            cout << "player 1" << " wins this round!\n";
        }
        else if (roll2 > roll1) {
            score2++;
            cout << "player 2" << " wins this round!\n";
        }
        else {
            cout << "It's a tie this round!\n";
        }
    }

    cout << "\n--- Final Results ---\n";
    cout << "player 1" << "'s score: " << score1 << endl;
    cout << "player 2" << "'s score: " << score2 << endl;

    if (score1 > score2) {
        cout << "Winner: " << "player 1" << "!\n";
    }
    else if (score2 > score1) {
        cout << "Winner: " << "player 2" << "!\n";
    }
    else {
        cout << "It's a tie!\n";
    }

    return 0;
}

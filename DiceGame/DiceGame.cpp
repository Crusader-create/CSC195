#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "You entered: " << number << endl;
    return 0;
}


using namespace std;

int main() {
    srand(time(0)); // Seed random number generator
    int randomNumber = rand() % 6 + 1; // Random number from 1 to 6
    cout << "Random number: " << randomNumber << endl;
    return 0;
}

#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <map>
#include <string>

using namespace std;

// Function to demonstrate array
void demoArray() {
    // Initialize array with days of the week
    array<string, 7> days = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

    // Print number of elements
    cout << "Array size: " << days.size() << endl;

    // Print each day using a range-based for loop
    for (const auto& day : days) {
        cout << day << endl;
    }
}

// Function to demonstrate vector
void demoVector() {
    // Initialize vector with five integers
    vector<int> numbers = { 1, 2, 3, 4, 5 };

    // Add two more integers
    numbers.push_back(6);
    numbers.push_back(7);

    // Remove the last element
    numbers.pop_back();

    // Print contents
    cout << "Vector contents: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
}

// Function to demonstrate list
void demoList() {
    // Initialize list with fruit names
    list<string> fruits = { "apple", "banana", "cherry" };

    // Add to front and back
    fruits.push_front("mango");
    fruits.push_back("orange");

    // Remove a specific element
    fruits.remove("banana");

    // Print contents using iterator
    cout << "List contents: ";
    for (auto it = fruits.begin(); it != fruits.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

// Function to demonstrate map
void demoMap() {
    // Initialize map with product stock counts
    map<string, int> stock = {
        {"apples", 10},
        {"bananas", 5},
        {"carrots", 8}
    };

    // Update stock count for one item
    stock["bananas"] = 12;

    // Print key-value pairs
    cout << "Map contents:\n";
    for (const auto& pair : stock) {
        cout << pair.first << " → " << pair.second << endl;
    }
}

int main() {
    cout << "--- Array Demo ---\n";
    demoArray();

    cout << "\n--- Vector Demo ---\n";
    demoVector();

    cout << "\n--- List Demo ---\n";
    demoList();

    cout << "\n--- Map Demo ---\n";
    demoMap();

    return 0;
}


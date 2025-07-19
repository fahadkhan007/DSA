#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "enter the " << i << "th element: ";
        cin >> arr[i];
    }
    
    // Hashing the numbers
    int hashTable[100] = {0}; // Assuming numbers are in range 0-99
    for (int i = 0; i < n; i++) {
        hashTable[arr[i]]++;
    }

    cout << "Hash table representation:\n";
    for (int i = 0; i < 100; i++) {
        if (hashTable[i] > 0) {
            cout << "Number " << i << ": " << hashTable[i] << " times\n";
        }
    }

    return 0;
}
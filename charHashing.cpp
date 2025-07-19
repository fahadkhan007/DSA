#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++) {
        cout << "enter the " << i << "th character: ";
        cin >> arr[i];
    }
    
    // Hashing the characters
    int hashTable[256] = {0}; // Assuming ASCII characters
    for (int i = 0; i < n; i++) {
        hashTable[arr[i]]++;
    }

    cout << "Hash table representation:\n";
    for (int i = 0; i < 256; i++) {
        if (hashTable[i] > 0) {
            cout << "Character '" << char(i) << "': " << hashTable[i] << " times\n";
        }
    }

    return 0;
}




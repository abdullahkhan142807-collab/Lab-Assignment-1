#include <iostream>
using namespace std;

int main() {
    int arr[10], key;
    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "Enter value to search: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == key) {
            cout << "Value found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Value not found in the array." << endl;

    return 0;
}

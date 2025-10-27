#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int temp = num, sum = 0, digits = 0;

    int n = num;
    while (n != 0) {
        digits++;
        n /= 10;
    }

   
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == num);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number))
        cout << number << " is an Armstrong number." << endl;
    else
        cout << number << " is not an Armstrong number." << endl;

    return 0;
}

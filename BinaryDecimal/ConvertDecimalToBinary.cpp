#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // Input variable
    int n;

    // Prompt user for input
    cout << "Enter the digit : ";
    cin >> n;

    // Convert input to positive if negative
    int value = n;
    if(value < 0){
        n = n*-1;   
    }

    // Convert positive integer to binary
    int positiveBinaryNumber = 0;
    int i = 0;
    while (n!=0) {
        int bit = n & 1;
        positiveBinaryNumber = (bit * pow(10, i)) + positiveBinaryNumber;
        n = n>>1;
        i++;
    }

    // Calculate ones' complement
    int onesCompliment = 0;
    if(value < 0){
        onesCompliment = ~positiveBinaryNumber;   
        onesCompliment = onesCompliment + 1;
    } else {
        onesCompliment = positiveBinaryNumber;
    }

    // Output result
    cout << "The output is "<< onesCompliment;

    return 0;
}
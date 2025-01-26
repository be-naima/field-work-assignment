#include <iostream>
using namespace std;

class Fibonacci {
public:
    void printFibonacci(int n) {
        int a = 0, b = 1, next;

        if (n <= 0) {
            cout << "Please enter a positive integer." << endl;
            return;
        }

        cout << "Fibonacci Series: ";
        for (int i = 1; i <= n; i++) {
            cout << a << " ";
            next = a + b;
            a = b;
            b = next;
        }
        cout << endl;
    }
};

int main() {
    Fibonacci fib;

    int n;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    fib.printFibonacci(n); 

    return 0;
}

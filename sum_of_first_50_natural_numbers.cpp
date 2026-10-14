#include<iostream>
using namespace std;
int main()
{
    const int n = 50;
    int sum = 0;
    for (int i = 1; i<= n; i++) {
        sum += i;
    }
    cout << "Sum of first" << n << " natural numbers (loop): " << sum << endl;
    int formulaSum = n * (n+1)/2;
    cout << "Sum using formula n(n+1)/2: " << formulaSum << endl;
    return 0;
}
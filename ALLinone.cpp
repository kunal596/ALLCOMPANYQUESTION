#include <bits/stdc++.h>
using namespace std;
int b = 0;
int rev(int n)
{
    if (n == 0 && n < 10)
        return n;
    b = b * 10 + n % 10;
    return rev(n / 10);
}
void output()
{
    int n;
    cout << "enter a number: " << endl;
    cin >> n;
    rev(n);
    if (n >= 10)
    {
        cout << b << endl;
    }
    else
        return;
}

int main()
{
    // driver code for multiple test cases
    int n;
    cout << "enter the test cases: " << endl;
    cin >> n;
    while (n--)
    {
        output();
    }
    return 0;
}
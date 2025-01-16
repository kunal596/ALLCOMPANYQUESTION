#include <bits/stdc++.h>
using namespace std;
class rew
{
public:
    int b = 0;
    int rev(int n)
    {
        if (n == 0 && n < 10)
            return n;
        b = b * 10 + n % 10;
        return rev(n / 10);
    }

    int revoutput(int n)
    {
        rev(n);
        if (n >= 10)
        {
            cout << b << endl;
        }
        return b = 0;
    }
};

class prm
{
public:
    int b = 0, a = 0;
    int prime(int n)
    {
        if (n == a)
            return n;
        if (n > a)
            a++;
        if (n % a == 0)
            b++;
        return prime(n);
    }

    int primeoutput(int n)
    {
        prime(n);
        if (b == 2)
            cout << "its prime: " << endl;
        else
            cout << "its not prime" << endl;
        return a = 0, b = 0;
    }
};

class fac
{
public:
    int b = 0;
    int fact(int n)
    {
        if (n <= 1)   // n==0 then it should return 1
            return n; // if n==0 then n=1
        return n * fact(n - 1);
    }

    void factoutput(int n)
    {
        cout << fact(n) << endl;
    }
};

int main()
{
    // driver code for multiple test cases
    rew o;
    prm o1;
    fac o2;
    int a, n;
    cout << "enter the test cases: " << endl;
    cin >> a;
    while (a--)
    {
        cout << "enter a number: " << endl;
        cin >> n;
        // o.revoutput(n);
        // o1.primeoutput(n);
        o2.factoutput(n);
    }
    return 0;
}
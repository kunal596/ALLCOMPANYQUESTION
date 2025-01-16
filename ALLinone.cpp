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

class fib
{
public:
    int b = 0, a = 1, m;
    int fibbo(int n)
    {
        if (n <= 1)   // n==0 then it should return 1
            return n; // if n==0 then n=1
        return fibbo(n - 1) + fibbo(n - 2);
    }
    void fibo(int n)
    {
        if (n == 0)
            return;
        m = b + a;
        if (m == 1)
            cout << b << " " << a << " ";
        b = a;
        a = m;
        cout << m << " ";
        fibo(n - 1);
    }

    int fibbooutput(int n)
    {
        cout << fibbo(n) << endl;
        fibo(n);
        cout << endl;
        return a = 1, b = 0, m = 0;
    }
};

class gd
{
public:
    int c = 0, a, b;
    int gc2(int n)
    {
        if (n < 2)
            return n;
        if (n > 0)
            c = n - 1;
        if (a % c == 0 && b % c == 0)
            return c;
        return gc2(n - 1);
    }
    int output()
    {
        cout << "enter a number 1: " << endl;
        cin >> a;
        cout << "enter a number 2: " << endl;
        cin >> b;
        if (a > b)
        {
            gc2(a);
            cout << c << endl;
        }
        else
        {
            gc2(b);
            cout << c << endl;
        }
        // cout << c << endl;
        return c = 0;
    }
};

int main()
{
    // driver code for multiple test cases
    rew o;
    prm o1;
    fac o2;
    fib o3;
    gd o4;
    int a, n;
    cout << "enter the test cases: " << endl;
    cin >> a;
    while (a--)
    {
        // cout << "enter a number: " << endl;
        // cin >> n;
        // o.revoutput(n);
        // o1.primeoutput(n);
        // o2.factoutput(n);
        // o3.fibbooutput(n);
        o4.output();
    }
    return 0;
}
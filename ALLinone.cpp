#include <bits/stdc++.h>
using namespace std;
class king
{
public:
    int a = 0, b = 1, c;
    int fibbo(int n)
    {
        if (n <= 1)
            return n;
        return fibbo(n - 1) + fibbo(n - 2);
    }

    void fibo(int n) 
    {
        int a = 0, b = 1, c;
        for (int i = 0; i < n - 1; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << endl;
    }
};

int main()
{
    king o;
    int n;
    cout << "enter a number: " << endl;
    cin >> n;
    cout << o.fibbo(n) << endl;
    o.fibo(n);
    return 0;
}
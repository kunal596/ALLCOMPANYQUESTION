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

class leap
{
public:
    int lep(int n)
    {
        bool leap = true;
        cout << "enter a number: " << endl;
        cin >> n;
        if (n < 1000 || n > 10000)
            return 0;
        if (n % 4 == 0 || n % 400 == 0 && n % 100 != 0)
        {
            cout << "its leap" << endl;
        }
        else
            cout << "not leap year: " << endl;
        return 0;
    }
};

class sumofnat
{
public:
    int sum(int n)
    {
        if (n == 0)
            return n;
        return n + sum(n - 1);
    }
    void sumout(int n)
    {
        cout << "enter a number: ";
        cin >> n;
        cout << sum(n) << endl;
        ;
    }
};

class revArr
{
public:
    int a = 0, b = 0, k, m = 0, l = 0;
    vector<int> p;
    int n;
    int arr(int n)
    {
        if (n < 1)
            return n;
        if (n > 0)
        {
            cin >> b;
            p.push_back(b);
        }
        return arr(n - 1);
    }
    void arrinput(int n)
    {
        if (n < 1)
            return;
        cout << p[a] << " ";
        a++;
        arrinput(n - 1);
    }
    void reverse(int k)
    {
        if (k == 0)
            return;
        swap(p[l], p[a - 1]);
        l++;
        a--;
        reverse(k - 1);
    }
    void output(int m)
    {
        if (m == n)
            return;
        cout << p[m] << " ";
        output(m + 1);
    }
    int arroutput()
    {
        cout << "enter the size of array: " << endl;
        cin >> n;
        cout << "enter elements of array: " << endl;
        arr(n);
        arrinput(n);
        cout << endl;
        k = (n / 2);
        reverse(k);
        output(m);
        cout << endl;
        p.clear();
        return a = 0, b = 0, n = 0, k = 0, m = 0, l = 0;
    }
};

class primefactornumber
{
public:
    int k = 0;
    int a = 2;
    void primefactor(int n)
    {
        if (a == n)
            return;
        if (n % a == 0)
        {
            if (a == 2 || a == 3)
                cout << a << endl;
            if (a % 2 != 0 && a % 3 != 0)
                cout << a << endl;
        }
        a++;
        primefactor(n);
    }

    int withoutfunct(int n)
    {
        int k;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                // cout<<i<<endl;
                if (i == 2)
                {
                    cout << i << endl;
                }
                else
                {
                    int k = 0;
                    int j = 2;
                    while (i > j)
                    {
                        if (i % j == 0)
                        {
                            k++;
                        }
                        j++;
                    }
                    if (k == 0)
                    {
                        cout << i << endl;
                    }
                }
            }
        }
        return 0;
    }

    int primeout(int n)
    {
        // withoutfunct(n);
        primefactor(n);
        return a = 2;
    }
};

class binary_todecimal
{
public:
    int a = 0, b = 0, count = 0, c = 0;
    int binary(int n)
    {
        if (n == 0)
            return 0;
        b = n % 10;
        count = b * pow(2, a);
        c = c + count;
        a++;
        return binary(n / 10);
    }
    int output()
    {
        int n;
        cout << "enter the number in the form of binary: " << endl;
        cin >> n;
        binary(n);
        cout << c << endl;
        return a = 0, b = 0, count = 0, c = 0;
    }
};

class ascii
{
public:
    int asci(char n)
    {
        return int(n);
    }
    void output()
    {
        char n;
        cout << "enter the charachter: " << endl;
        cin >> n;
        cout << asci(n) << endl;
    }
};

class clasify_to_conso_and_vowels
{
public:
    int vowels(char n)
    {
        if (n == 'a' || n == 'A' || n == 'E' || n == 'e' || n == 'i' || n == 'I' || n == 'o' || n == 'O' || n == 'U' || n == 'u')
        {
            cout << "vowels" << endl;
            return n;
        }
        else
        {
            cout << "consonants" << endl;
            return n;
        }
        return 0;
    }
    void output()
    {
        char n;
        cout << "enter the charachter: " << endl;
        cin >> n;
        vowels(n);
    }
};

class sum_of_digit_divisible_by_each_digit
{
public:
    int a = 0, b = 0, c = 0;
    int perfect(int n)
    {
        if (n == 0)
        {
            return n;
        }
        b = b + n % 10;
        a++;
        return perfect(n / 10);
    }
    int perfect2(int n)
    {
        if (n == 0)
        {
            return n;
        }
        if (n % 10 == 0)
        {
            return n % 10;
        }
        else if (b % (n % 10) == 0)
        {
            c++;
        }
        return perfect2(n / 10);
    }
    int output()
    {
        int n;
        cout << "enter the number: " << endl;
        cin >> n;
        if (n < 10)
        {
            return 0;
        }
        perfect(n);
        perfect2(n);
        if (a == c)
        {
            cout << "its divisible by each number " << endl;
        }
        else
        {
            cout << "its not a divisible by each number " << endl;
        }
        return a = 0, b = 0, c = 0;
    }
};

class perfect_number
{
public:
    int a = 1, b = 0, n;
    int perfect(int n)
    {
        if (a == n)
            return n;
        if (n % a == 0)
        {
            b = b + a;
            cout << a << endl;
        }
        a++;
        return perfect(n);
    }
    int output()
    {
        cout << "enter a number: " << endl;
        cin >> n;
        perfect(n);
        if (b == a)
        {
            cout << "its perfect number: " << endl;
        }
        else
        {
            cout << "its not a perfect number: " << endl;
        }
        return a = 1, b = 0;
    }
};

class remove_wide_space
{
public:
    int b = 0;
    string k;
    int remove(int a)
    {
        if (b == a)
            return b;
        if (k[b] != ' ')
            cout << k[b];
        b++;
        return remove(a);
    }

    int output()
    {
        cout << "enter the string: " << endl;
        getline(cin, k);
        remove(k.length());
        cout << endl;
        return b = 0;
    }

    void without_function_output()
    {
        string l;
        cout << "enter the string: " << endl;
        cin >> l;
        getline(cin, l);
        for (int i = 0; i < l.size(); i++)
        {
            if (l[i] != ' ')
            {
                cout << l[i];
            }
        }
        cout << endl;
    }
};

class power_of_a_number
{
public:
    int a, b;
    int c = 1;
    int power(int b)
    {
        if (b == 0)
        {
            return b;
        }
        c = c * a;
        return power(b - 1);
    }
    int output()
    {
        cout << "enter the number: " << endl;
        cin >> a;
        cout << "enter the power of a number: " << endl;
        cin >> b;
        // cout<<pow(a,b);
        power(b);
        cout << c << endl;
        ;
        return c = 1;
    }
};

class Anagram
{
public:
    int k = 0;
    int l, m = 0, n = 0;
    string a, b, c;
    int looping(int n)
    {
        if (n == a.size())
        {
            return n;
        }
        n++;
        return looping(n);
    }

    int ana(int m)
    {
        if (m == a.length())
        {
            return m;
        }
        if (int(a[m]) > int(a[looping(0)]))
        {
            swap(a[m], a[looping(n)]);
        }
        cout << a[m];
        m++;
        return ana(m);
    }

    // void output()
    // {
    //     cout << "enter the string 1: " << endl;
    //     getline(cin, a);
    //     cout << "enter the string 2: " << endl;
    //     getline(cin, b);
    //     looping(n);
    //     ana(n);
    // if (a.length() == b.length())
    // {

    // }
    //     str1(a.length());
    //     if (k == a.length())
    //     {
    //         cout << "The string is anagram "<< endl;
    //     }
    //     else
    //     {
    //         cout << "it is not an Anagram "<< endl;
    //     }
    // }
    // else
    // {
    //     cout << "it is not an anagram " << endl;
    // }
    // }

    // 1 . approch
    void approch()
    {
        cout << "enter the string " << endl;
        getline(cin, a);
        cout << "enter the string " << endl;
        getline(cin, b);
        for (int i = 0; i < a.length(); i++)
        {
            for (int j = 1; j < a.length(); j++)
            {
                if (int(a[i]) > a[j])
                {
                    swap(a[i], a[j]);
                }
            }
        }
        for (int i = 0; i < b.length(); i++)
        {
            for (int j = 1; j < b.length(); j++)
            {
                if (int(b[i]) > b[j])
                {
                    swap(b[i], b[j]);
                }
            }
        }
        if (a == b)
        {
            cout << "its anagram " << endl;
        }
        else
        {
            cout << "its not angaram" << endl;
        }
    }

    void output()
    {
        cout << "enter the string " << endl;
        getline(cin, a);
        cout << "enter the string " << endl;
        getline(cin, b);
        int g = 0;
        if (a.length() == b.length())
        {
            for (int i = 0; i < a.length(); i++)
            {
                for (int j = 0; j < a.length(); j++)
                {
                    if (a[i] == b[j])
                    {
                        g++;
                        break;
                    }
                }
            }
            if (g == a.length())
            {
                cout<<g<<endl;
                cout<<a.length()<<endl;
                cout << "its anagram " << endl;
            }
            else
            {
                cout<<a<<endl;
                cout<<b<<endl;
                cout << "its not anagram " << endl;
            }
        }
        else
        {
            cout << "its not anagram " << endl;
        }
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
    leap o5;
    sumofnat o6;
    revArr o7;
    primefactornumber o8;
    binary_todecimal o9;
    ascii o10;
    clasify_to_conso_and_vowels o11;
    sum_of_digit_divisible_by_each_digit o12;
    perfect_number o13;
    remove_wide_space o14;
    power_of_a_number o15;
    Anagram o16;
    int a = 1, n;
    cout << "enter the test cases: " << endl;
    cin >> a;
    cin.ignore();
    while (a--)
    {
        // cout << "enter a number: " << endl;
        // cin >> n;
        // o.revoutput(n);
        // o1.primeoutput(n);
        // o2.factoutput(n);
        // o3.fibbooutput(n);
        // o4.output();
        // o5.lep(n);
        // o6.sumout(n);
        // o7.arroutput();
        // o8.primeout(n);
        // o9.output();
        // o10.output();
        // o11.output();
        // o12.output();
        // o13.output();
        // o14.output();
        // o15.output();
        o16.output();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int b = 0;
int rev(int n)
{
    if (n == 0 && n < 10)
        return n;
    b =  b * 10 + n % 10; 
    return rev(n / 10);
}
void input()
{
    int n;
    cout << "enter a number: " << endl;
    cin >> n;
    rev(n);
    if(n>=10){
        cout<<b<<endl;
    }
    else 
        return;
}

int main()
{
    int b;
    input();
    return 0;
}
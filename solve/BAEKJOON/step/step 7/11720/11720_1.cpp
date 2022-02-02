#include <iostream>
using namespace std;

int main()
{
    int n, total = 0;
    cin >> n ;

    char ch;
    
   
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        total += ch - 48;
    }

    cout << total << "\n";
    
}
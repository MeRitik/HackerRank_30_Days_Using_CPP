#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    int maxi=0,c=0;
    while(n!=0)
    {
        int rem = n%2;
        n = n/2;
        if(rem==1)
        {
            c++;
            if(c>maxi)
            {
                maxi++;
            }
        }
        else
        {
            c = 0;
        }
    }
    cout << maxi;
    
    return 0;
}

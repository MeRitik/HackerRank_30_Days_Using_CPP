#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6][6];
    for(int i=0;i<6;i++){
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }
    
    int high = INT_MIN;
    int sum;

    for(int i=0;i<=3;i++)
    {
        for (int j = 0; j <= 3; j++)
	 {
 	     	sum = arr[i][j] +arr[i][j+1] +arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
           	if(sum>high)
          	 {
             	  	high = sum;
          	 }
        }
    }
    
    cout << high;
    
    return 0;
}

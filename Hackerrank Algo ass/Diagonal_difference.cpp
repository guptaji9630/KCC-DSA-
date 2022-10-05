#include<iostream>
#include<math.h> 
using namespace std ;
int main ()
{
    int n,i,j;
    cin>> n ; 
    int  arr[n][n] , d1=0,d2=0,diff ;
     for ( i = 0; i <n; i++)
    {
        for ( j = 0; j<n; j++)
        {
            cin>> arr[i][j] ;
        }
        
    }
    for ( i = 0; i <n; i++)
    {
        d1=d1+arr[i][i];
    }
    for ( i = 0; i <n; i++) 
    {
        d2=d2+ arr[i][n-i-1];
    }
    diff=d1-d2;
    cout<< abs(diff) ;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int functon1(int a, int b, int c, int d)
       {
           int values[4]={a,b,c,d};
           int max= values[0];
           for(int i = 0; i<=4; i++){
               if(max<values[i]){
                   max=values[i];
               }
           }
           return max;
       } 
    
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      int a,b,c,d;
      cin>>a>>b>>c>>d;
      int ans = functon1( a,  b,  c, d);
      cout<<ans;
      
    return 0;
}

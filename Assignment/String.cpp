#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string a,b;
    cin>>a>>b;
    
   int c= a.length();
   int d= b.length();
   cout<<c<<" "<<d<<"\n";
   
   string e= a+b;
   cout<<e<<"\n";
   char c1 = a[0];
    char c2 = b[0];
    a[0] = c2;
    b[0] = c1;
    
    cout << a <<" "<<b;
   
    return 0;
}

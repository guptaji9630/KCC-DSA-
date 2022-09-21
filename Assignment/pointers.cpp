// Hackerrank->https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int value(int v, int f){
    int a = v+f;
    
    
    return a;
   
    
}
int value2(int v , int f){
    int b = (v-f);
    if(b<0){
        b=-b;
    }
    return b;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int a,b;
    cin>>a>>b;
    int result = value(a,b);
    int result2 = value2(a, b);
       cout<<result<<"\n"<<result2;
    return 0;
}

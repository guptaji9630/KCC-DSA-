#include <iostream>
#include <cstdio>
using namespace std;

int main() {
//     int a;
//    long int b;
//     char c;
//     float d;
//     double f;
//     cin>>a>>b>>c>>d>>f;
    
//     cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<f;
 int i;
    long l;
    char c;
    float f;
    double d;
    scanf("%d %ld %c %f %lf" , &i, &l, &c, &f, &d);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", i,l,c,f,d);
        return 0;
}

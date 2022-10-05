#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main(){
    int a0, a1, a2, b0, b1, b2;
    cin >> a0 >> a1 >> a2;

cin >> b0 >> b1 >> b2;


int alice = (a0 > b0)*1+(a1>b1)*1+(a2>b2)*1;

int bob = (b0>a0)*1+(b1>a1)*1+(b2>a2)*1;
// int alice;
// int bob;
// if(a0>b0){
//     alice++;
// }
// else if (a0<b0) {
// bob++;
// }
// else if (a1>b1) {
// alice++;
// }
// else if (a1<b1) {
// bob++;
// }
// else if (a2>b2) {
// alice++;
// }
// else if (a2<b2) {
// bob++;
// }
// int a= alice;
// int b = bob;

// cout << a << " " << b << endl;
cout << alice << " " << bob << endl;
return 0;
}

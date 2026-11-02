#include <iostream>
using namespace std;

int ggt(int a, int b){
    int rest{0};
    while(b !=0){
        rest = (a%b);
        a = b;
        b = rest;
    }
    return a;
}

int main()
{
   int zaehler;
   int nenner;
   cin >> zaehler >> nenner;

   int teiler{ggt(zaehler, nenner)};
   cout << zaehler/teiler << "/" << nenner/teiler << endl;
    return 0;
}

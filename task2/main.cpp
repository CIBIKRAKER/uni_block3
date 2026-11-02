#include <iostream>
using namespace std;

int reversed(int number){
    int reversed{0};

    while(number > 0){
        int lastDigit{number % 10};
        reversed = reversed * 10 + lastDigit;
        number /= 10;
    }

    return reversed;
}


int main(){
    int number{0};

    cin >> number;

    if(reversed(number) == number){
        cout << reversed(number) << " Palindrom" << endl;
    }
    else{
        cout << reversed(number) << endl;
    }

    return 0;
}
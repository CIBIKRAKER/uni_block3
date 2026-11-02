#include <iostream>
using namespace std;

int summeTeiler(int n){
    int summe{0};

    for(int i{1}; i <= n; i++){
        if(n%i == 0){
            summe += i;
        }
    }
    return summe;
}

int main(){
    int n{0};

    cin >> n;

    cout << summeTeiler(n) << endl;
}
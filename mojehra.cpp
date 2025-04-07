#include <iostream>
//#include <cmath>
#include <math.h>
using namespace std;

void vypisPozdrav() {
    cout << "Ahoj, vítej v programu!" << endl;
}

void soucet1(){
    int a=8, b=10;
    cout << a + b;

}

int soucet(int a, int b){
    return a+b;

}

float nthroot(float a = 1, float b = 1){
    //
    return pow(a,(1/b));
}

int main(){

    cout << nthroot(27,3);

}

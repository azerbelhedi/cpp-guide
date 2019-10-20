#include <iostream>

using namespace std ;

void increment(int &a){
    a++;
}

int main(){
    int a = 465 , b;
    cout << a << "\n";
    b = a;
    increment(a);
    cout << a << "\n";
    cout << "diff : " << a-b;
    return 0;
}
#include <iostream>
void pointerSquare(int*) ;

using namespace std ;

int main(){
    int n ;
    cin >> n;

    pointerSquare(&n);

    cout << n;
    return 0 ;
}

void pointerSquare(int *n){
    *n = *n * *n ;
}


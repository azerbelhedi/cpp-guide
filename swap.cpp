// swap integer //done//
// swap boolean //done//
// swap characters //done//
// swap float //done//
// swap double //done//
// swap string 
// swap integer array

#include <iostream>
#include <string>

void swapValue(int , int);
void swapValue(bool , bool);
void swapValue(char , char);
void swapValue(float , float);
void swapValue(double , double);

using namespace std ;

int main(){
    
    int a = 5 , b = 12;
    cout << "a : " << a << "| b : " << b << "\n" ;
    swap(a , b);
    cout << "a : " << a << "| b : " << b << "\n";
    
    bool boolA = true, boolB = false ;
    cout << "a : " << boolA << "| b : " << boolB << "\n";
    swap(boolA , boolB);
    cout << "a : " << boolA << "| b : " << boolB << "\n";    

    char charA = 'a', charB = 'b' ;
    cout << "a : " << charA << "| b : " << charB << "\n";
    swap(charA , charB);
    cout << "a : " << charA << "| b : " << charB << "\n"; 

    float floatA = 1.234 , floatB = 9.876;
    cout << "a : " << floatA << "| b : " << floatB << "\n";
    swap(floatA , floatB);
    cout << "a : " << floatA << "| b : " << floatB << "\n"; 

    double doubleA = 1.2345544444 , doubleB = 9.876544444;
    // printf("testing double with old c : %.15g \n" , doubleA);
    cout.precision(17); // this will all the next cout float precesion to 17 instead of ~5 (not sure about 5)
    cout << "a : " << doubleA << "| b : " << doubleB << "\n";
    swap(doubleA , doubleB);
    cout << "a : " << doubleA << "| b : " << doubleB << "\n";

    return 0;
}

void swapValue(int &a , int &b){
    int c;
    c = a;
    a = b;
    b = c;
}


void swapValue(bool &a , bool &b){
    bool c ;
    c = a;
    a = b;
    b = c;
}

void swapValue(char &a , char &b){
    char c ;
    c = a ;
    a = b;
    b = c;
}

void swapValue(float &a , float &b){
    float c;
    c = a ;
    a = b ;
    b = c ;
}

void swapValue(double &a , double &b){
    double c;
    c = a;
    a = b;
    b = c; 
}

#include <iostream>
void readMatrix(int* , int , int) ;
void writeMatrix(int* , int, int) ;
void revertMatrix(int* , int , int) ;

using namespace std ;

int main(){

    int x , y ;
    printf("x : ... y: ... \n");
    cin >> x >> y ;

    int matrix[x*y];

    readMatrix(matrix , x , y);
    writeMatrix(matrix , x , y);
    revertMatrix(matrix , x , y);
    writeMatrix(matrix , x , y);

    return 0 ;
}

void readMatrix(int matrix[] , int x , int y){
    for(int i = 0 ; i < y ;i++){
        for(int j = 0 ; j < x ; j++){
            scanf("%d" , &matrix[j +i*x]);
        }
    }
}

void writeMatrix(int matrix[] , int x , int y){
    for(int i = 0 ; i < y ; i++){
        for(int j = 0 ; j < x ; j++){
            printf("%d " , matrix[j + i*x]);
        }
        printf("\n");
    }
}

void revertMatrix(int matrix[] , int x , int y){
    for(int i = 0 ; i < x*y / 2; i++){
        int c = matrix[i] ;
        matrix[i] = matrix[x*y -1 -i];
        matrix[x*y -1 -i] = c;
    }
}
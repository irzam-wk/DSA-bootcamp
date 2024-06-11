#include <iostream>
using namespace std;
int main(){
    printf("bool:- %d   %d", sizeof(bool), sizeof(bool *));
    printf("\nint:- %d   %d", sizeof(int), sizeof(int *));
    printf("\nchar:- %d   %d", sizeof(char), sizeof(char *));
    printf("\nfloat:- %d   %d", sizeof(float), sizeof(float *));
    printf("\ndouble:- %d   %d", sizeof(double), sizeof(double *));
    printf("\nlong int:- %d   %d", sizeof(long int), sizeof(long int *));
    printf("\nlong long int:- %d   %d", sizeof(long long int), sizeof(long long int *));
    printf("\nlong double:- %d   %d", sizeof(long double), sizeof(long double *));
    printf("\nvoid:- %d   %d\n", sizeof(void), sizeof(void *));
    return 0;
}

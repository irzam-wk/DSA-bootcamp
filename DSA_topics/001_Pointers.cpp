#include <iostream>
using namespace std;
int main(){
    int x = 17;    
    int *p1 = &x;
    int **p2 = &p1;    
    cout<<"Addresses by Default are in hexa they start with 0x"<<endl<<"Example: "<<p1;
    printf("\nSection A:\nAddress of pointer:-");
    printf("\n\t&p1 = %x (0x)", &p1);
    printf("\n\t&p1 = %d (0d)", &p1);
    printf("\n\t&p1 = %d (0d)", p2);
    printf("\n\t&p1 = %x (0x)", p2);
    printf("\n\t&p2 = %x (0x)", &p2);
    printf("\n\t&p2 = %d (0d)", &p2);
    printf("\n\t&p2 = %d (0d)", *p2);
    printf("\n\t&p2 = %x (0x)", *p2);
    printf("\nSection B:\nAddress of variable:-");
    printf("\n\tThrough P1 hex = %x dec = %d", p1, p1);
    printf("\n\tThrough P2 hex = %x dec = %d", *p2, *p2);
    printf("\nSection C:\nValue Pointed to:-");
    printf("\n\tx = %d", x);
    printf("\n\t*p1 = %d", *p1);
    printf("\n\t**p2 = %d\n", **p2);
    return 0;
}

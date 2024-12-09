#include <stdio.h>

struct A
{
    char b;
    int a;
    double d;
    float c;
};
struct B
{
    int a;
    char b;
    float c;
    int z;
    double d;
};
struct C
{
    int m;
    char k[10];
    char l[15];
};


int main()
{

    int a=10;
    char b='A';
    float c= 12.54f;
    double d= 20.8415;
    char l[10] ="likhitha";

    printf("Size of data types\n");
    printf("size of int = %d\n",sizeof(a));
    printf("size of char = %d\n",sizeof(b));
    printf("size of float = %d\n",sizeof(c));
    printf("size of double = %d\n",sizeof(d));
    printf("size of char string = %d\n",sizeof(l));
    printf("size of %d\n",sizeof(void));
    printf("size of int* = %d\n",sizeof(int *));
    printf("size of char* = %d\n",sizeof(char *));
    printf("size of float* = %d\n",sizeof(float *));
    printf("size of double* = %d\n",sizeof(double *));

    printf("Size of constants\n");
    printf("size of int  = %d\n",sizeof(10));
    printf("size of int (keyword)  = %d\n",sizeof(int));


    printf("size of char = %d\n",sizeof('A'));
    printf("size of decimal = %d\n",sizeof(12.54));
    printf("size of double = %d\n",sizeof(20.8415));
    printf("size of char string = %d\n",sizeof("likhitha"));

    printf("Size of structures\n");
    printf("size of struct A = %d\n",sizeof(struct A));
    printf("size of struct B = %d\n",sizeof(struct B));
    printf("size of struct C = %d\n",sizeof(struct C));


    printf("Hello World!\n");
    return 0;
}

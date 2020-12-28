#include<stdio.h>

int main() {
char c;
unsigned char d;
int i;
unsigned int j; 
int k;
unsigned int I;
long int m;
unsigned long int n;
float x;
double y;
long double z;

/* char */
scanf("%c %c", &c, &d );
printf("%c %c" ,c ,d);

/* int */
scanf("%d %u" , &i, &j ); 
printf("%d %u" , i , j );

/* short int */
scanf("%d %u", &k, &I);
printf("%d %u" , k, I);

/* long int */  
scanf ( "%ld %lu", &m, &n); 
printf("%ld %lu" , m, n);

/* float, double, long double */
scanf ("%f %lf %Lf", &x, &y, &z); 
printf("%f %f %Lf" ,x,y,z);

return 0;

}
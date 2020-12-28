
#include<stdio.h>

int main() {
/*....... DECLARATIONS ....... */
float x, p;
double y, q;
unsigned k;

/* .......DECLARATIONS AND ASSIGNMENTS...... */
int m = 54321 ;
long int n = 1234567890 ;

 /* ......ASSIGNMENTS......... */
x = 1.234567890000;
y = 9.87654321 ;
k = 54321 ;
p = q = 1.0;

/*....... PRINTING........ */
printf("m = %d\n", m);
printf("n = %ld\n", n) ;
printf("x = %.121f\n", x);
printf("x = %f\n", x) ;
printf("y = %.121f\n",y);
printf("y = %lf\n", y);
printf("k = %u p = %f q = %.121f\n", k, p, q);

return 0;

}
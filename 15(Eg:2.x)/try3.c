#include <stdio.h>

int main() {
    float salary, HRA, DA;
    printf("Enter your Salary: "); scanf("%f", &salary);

    if ( salary >= 1500) {
         HRA = 500;
         DA = (salary * 98/100);

         printf("Your HRA is %f and DA is %f", HRA ,DA);
    } else {
       HRA = (salary * 10/100);
       DA = (salary * 90/100);

       printf("Your HRA is %f and DA is %f", HRA ,DA);
    }
    return 0;
}
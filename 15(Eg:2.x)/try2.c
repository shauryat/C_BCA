#include <stdio.h>

int main() {
int years;
int current_year = 2021;
int year_join;


printf("Enter the year you joined the org. :");
scanf("%d", &year_join);
years = current_year - year_join;
if ( years > 3) {
   printf("You get the bonus of 2500 as you have worked %d years", years);
} else {
    printf("work for more years as you have worked %d years", years);
}
return 0;
}
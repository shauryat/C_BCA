#include <stdio.h>

enum week_day{ Sunday , Monday , Tuesday , Wednesday, Thursday , Friday , Saturday };

int main() {

enum week_day day0 = Sunday;
enum week_day day1 = Monday;
enum week_day day2 = Tuesday;
enum week_day day3 = Wednesday;
enum week_day day4 = Thursday;
enum week_day day5 = Friday;
enum week_day day6 = Saturday;

printf("the index is %d\n" , day0);
printf("the index is %d\n" , day1);
printf("the index is %d\n" , day2);
printf("the index is %d\n" , day3);
printf("the index is %d\n" , day4);
printf("the index is %d\n" , day5);
printf("the index is %d" , day6);

return 0;
}
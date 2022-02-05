
#include<stdio.h>
#include<locale.h>

long double input_comma (long double i)
{
    setlocale(LC_NUMERIC, "");
    return i;
}

int main()
{
    long double x = 0.00;
    printf("Enter value: ");
    scanf("%Lf", &x);
  printf("%'.2Lf\n", input_comma(x));

return 0;
}
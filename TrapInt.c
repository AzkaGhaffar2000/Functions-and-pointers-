#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double integral1(double a, double b, double n);
double integral2(double a, double b, double n);
double integral3(double a, double b, double n);
double f1(double x);
double f2(double x);
double f3(double x);
int main()
{
	double a, b, F, res;
	char ch;
	double n;
	
	do {   //same as in java 
	printf("Please enter the Lower number: \n");
	scanf("%lf", &a);
	
	printf("Please enter the Higher number: \n");
	scanf("%lf", &b);
	
	printf("Please enter the number of the intervals: \n");
	scanf("%lf", &n);
	printf("Please enter the function you want to use, you can enter 1 for Function1, 2 for Function2 or 3 for Function3: ");
	scanf("%lf", &F);
	if (F == 1) {
	res = integral1(a, b, n);
	printf("\nThe trapezoid integral is: %lf\n",res);
	} else if (F == 2){
	res = integral2(a, b, n);
	printf("\nThe trapezoid integral is: %lf\n",res);
	} else if (F == 3){
	res = integral3(a, b, n);
	printf("\nThe trapezoid integral is: %lf\n",res);
	}else {
	printf("Enter valid data");
	}
	printf("Repeat or Continue Y/N: ");
	scanf(" %c", &ch);
	}
	while (ch == 'y' || ch == 'Y');
	}

double f1(double x){
  return x;
}
double integral1(double a, double b, double n)
{
	int i;
	double h, x, sum=0, calculate;
	double var = b - a;
    h = var/n;
	for(i=1;i<n;i++){
    x=a+i*h;
    sum=sum+f1(x);
  }
  calculate=(h/2)*(f1(a)+f1(b)+2*sum);
  return calculate;
}

double f2(double x){
  return x*x;
}
double integral2(double a, double b, double n)
{
	int i;
	double h, x, sum=0, calculate;
	double var = b - a;
    h = var/n;
	for(i=1;i<n;i++){
    x=a+i*h;
    sum=sum+f2(x);
  }
  calculate=(h/2)*(f2(a)+f2(b)+2*sum);
  return calculate;
}

double f3(double x){
	double p,q,r;
	p = pow(x, 3);
	q = 3 * pow(x, 2);
	r = 7 * x;
	
	return p + q + r + 11;
}
double integral3(double a, double b, double n)
{
	int i;
	double h, x, sum=0, calculate;
	double var = b - a;
    h = var/n;
	for(i=1;i<n;i++){
    x=a+i*h;
    sum=sum+f3(x);
  }
  calculate=(h/2)*(f3(a)+f3(b)+2*sum);
  return calculate;
}
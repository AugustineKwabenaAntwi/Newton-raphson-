#include <stdio.h>
#include <math.h>
double fxn( double value){
  double result = (value*value*value)-value-1;
  return result;
};
double dfxn( double value){
  double result = (3*(value*value))-1;
  return result;
};
double fxn2( double value){
  double result = (value*value*value)+2*(value*value)+value-1;
  return result;
};
double dfxn2( double value){
  double result = (3*(value*value))+(4*value)+1;
  return result;
};
double main(){
  double error;
  double a;
  double b;
   double checkerror;
  int choice;
   // taking inputs
  printf("This program finds the roots of your input using the newton raphsons method \n\n");
  printf("Please input as the prompts instructs!\n\n");
  printf("enter a reasonable random value > ");
  scanf("%lf",&a);
  printf("enter error eg.0.001 or 0.000001> ");
  scanf("%lf",&error);
  printf("Select the function that you want to find the root");
  printf("\n Enter 1 for x^(3)-x-1 \n\n Enter 2 for x^(3)+2x^(2)+x-1 \n\n here > ");
  scanf("%d",&choice);
  double count = 0;
  switch (choice)
  {
    case 1:
    do{
      b = a-(fxn(a)/dfxn(a));
      a = b;
      count = count + 1;
    }while(fabs(b)>error&&count!=50);
    printf("The root value of the function is %lf\n\n",a);
    break;

    case 2:
    do{
      b = a-(fxn2(a)/dfxn2(a));
      a = b;
      count = count + 1;
    }while(fabs(b)>error&&count!=50);
    printf("The root value of the function is %lf\n\n",a);
    break;

    default:
    printf("Follow the Instructions !!!\n\n");
    break;
  }

}

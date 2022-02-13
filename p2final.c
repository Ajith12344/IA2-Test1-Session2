#include<stdio.h>
int input_side()
{
int a;
printf("enter a side\n");
scanf("%d",&a);
return a;
}

int check_scalene(int a,int b,int c)
{
  if(a!=b&&b!=c&&c!=a)
  return 1;
  else 
  return 0;


}
void output(int a,int b,int c,int isscalene)
{
 if(isscalene)
 printf(" %d scalene triangle\n",isscalene);
 else
 printf("%d not scalene triangle\n",isscalene);
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);

}
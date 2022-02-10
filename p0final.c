#include<stdio.h>
void input(float *base,float *height)
{
 printf("enter base and height\n");
 scanf("%f%f",base,height);

}
void find_area(float base,float height,float *area)
{
 *area =base*height;
}
void output(float base ,float height,float area)
{
 printf("the area of %f %f triangle is %f\n ",base,height,area);
}
int main()
{
  int a,b,c
  input(&a,&b);
  find_area(a,b,&c);
  output(a,b,c);
  return 0;

}
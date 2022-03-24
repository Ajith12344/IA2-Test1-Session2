#include<stdio.h>
struct _triangle
{
float base,altitude,area;
};
typedef struct _triangle Triangle;
int input_n()
{
 int  f;
  printf("enter the numbers of triangles\n");
  scanf("%d",&f);
  return f;
}
Triangle input_triangle()
{
Triangle a;
  printf("enter base and alitude\n");
  scanf("%f%f",&a.base,&a.altitude);
  return a; 
}
 void input_n_triangles(int n,Triangle t[n])
{
  for (int i=0;i<n;i++)
    {
     t[i] =input_triangle();
    }
}
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}
void find_areas_n(int n,Triangle t[n])
{
for(int i=0;i<n;i++)
  {
  find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n,Triangle t[n])
{
  Triangle small;
  small=t[0];
  for(int i=0;i<n;i++)
    {
       if(small.area > t[i].area)
       { small=t[i];
         }
      
    }
 return small;
}
void output(int n,Triangle t[n],Triangle smallest)
{
  for (int i = 0; i < n - 1; i++)
  {
    printf("%0.1f, %0.1f and\n", t[i].base, t[i].altitude);
  }
  printf("%f, %f\nis\ntriangle with base = %f and altitude = %f having area = %f\n", t[n-1].base, t[n-1].altitude, smallest.base, smallest.altitude, smallest.area);
}

int main()
{
  int n;
  
  n=input_n();
  Triangle t[n];
  input_n_triangles(n,t);
  find_areas_n(n,t);
   Triangle smallest=find_smallest_triangle(n,t);
  output(n,t,smallest);
  
}
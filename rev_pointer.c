/*#include <stdio.h>
int main()
{
int a[4],i=0,p;
int *g;
while(i != 4)
{
scanf("%d",&a[i]);

i++;
}

g=a;
g=g+3;
while(g >= (&a[0]))
{

printf("%d \t",*g);
g--;
}
}*/
/*#include<stdio.h>
#include<math.h>
float *sqroot (float *);
int main()
{
    float *root;int i=0;
    float a[3],*p;
    while (i != 3)
    {
        scanf("%f",&a[i]);
        i++;
    }
    p=a;
    root = sqroot(p);
    printf("%f \t %f ",*root,*(root+1));

    }
    float *sqroot(float *c)
    {

        double b[2];
        float a1,b1,c1;
        a1=*c;b1=*(c+1);c1=*(c+2);
        b[0]=((-(b1)+sqrt((pow(b1,2))-(4*(a1)*(c1))))/(2*(a1)));
        b[1]=((-b1-sqrt((pow(b1,2))-(4*(a1)*(c1))))/(2*(a1)));
        return (&b);


    }*/
 /*  #include<stdio.h>
   int *sum (int *[] ,int *[]);
   int *p;
    int main()
    {
        int a[2][2],b[2][2],i,j;
        for (i=0;i<=1;i++)
        {
            for(j=0;j<=2;j++)
            {
            scanf("%d %d",&a[i][j],&b[i][j]);
            }
            }
            p=sum(&a,&b);

    }
int *sum (int *c[2],int *d[2])
{    int e[2][2],f[2][2],s[2][2],k,l;
    for (k=0;k<=1;k++)
    {
        for(l=0;l<=1;l++)
        {
            e[k][l]=(*(c[k]+l));
            f[k][l]=(*(d[k]+l));
            s[k][l]=e[k][l]+f[k][l];
        }
    }
   return (&s);


}*/
/*
#include<stdio.h>
char done(char *,char);
int main()
{
 char *name;
 char l,p;
 scanf("%s",name);
 scanf("%s",&l);
 p=done(name,l);
 printf("%s",p);

    }
    char done(char *k,char m)
    {
        char add;
        while (*k != '\0')
        {
            if(*k != m)
            {add=add+(*k);}

            }
            return add;
        }*/

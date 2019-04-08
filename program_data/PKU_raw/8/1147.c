int* num (int a)
{
     int *p,i;
     p=(int*)malloc(a*sizeof(int));
     for (i=0;i<a;i++)
     {
         scanf("%d",&p[i]);
     }
     return  p;
}

void rank(int*p,int a)
{
     int i,j,t;
     for (i=a-1;i>0;i--)
     {
         for (j=0;j<i;j++)
         {
             if (*(p+j)>*(p+j+1))    //??????????
             {
                 t=*(p+j);
                 *(p+j)=*(p+j+1);
                 *(p+j+1)=t;
             }
         }
     }
}

int* add(int*p1,int*p2,int a,int b)
{
     int i;
     int* p3=(int*)malloc((a+b)*sizeof(int));
     for (i=0;i<a;i++)
     *(p3+i)=*(p1+i);
     for(i=0;i<b;i++)
     *(p3+a+i)=*(p2+i);
     return p3;
}

void print(int *p3,int x)
{
     int i;
     for (i=0;i<x;i++)
     {
         if (i==0)
         printf ("%d",p3[0]);
         else
         printf (" %d",p3[i]);
     }
}

main()
{
      int a,b,*p1,*p2,*p3;
      scanf ("%d",&a);scanf("%d",&b);
      p1=num(a);p2=num(b);
      rank(p1,a);rank(p2,b);
      p3=add (p1,p2,a,b);
      print(p3,(a+b));
      free(p1);free(p2);free(p3);
}
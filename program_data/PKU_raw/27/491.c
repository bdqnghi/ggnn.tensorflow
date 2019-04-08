void jie(float a,float b,float c)
{
     float p,disc,q,x1,x2;
     if (b/(2*a)!=0)
     p=-b/(2*a);
     else
     p=b/(2*a);
     disc=b*b-4*a*c;
      if (disc==0)
      printf("\nx1=x2=%5.5f\n",p);
      else
      if (disc>=0)
      {q=sqrt(disc)/(2*a);
  		x1=p+q;x2=p-q;
        printf("\nx1=%5.5f;x2=%5.5f\n",x1,x2);}
      else
      {q=sqrt(-disc)/(2*a);
      printf("\nx1=%5.5f+%5.5fi;x2=%5.5f-%5.5fi\n",p,q,p,q);}
     }
int main()
{   float *a,*b,*c;
    int n,i;
    scanf ("%d",&n);
    a= (float*)malloc(n*sizeof(float)) ;
    b= (float*)malloc(n*sizeof(float)) ;
    c= (float*)malloc(n*sizeof(float)) ;
    for (i=1;i<=n;i++)
    scanf ("%f %f %f",&a[i],&b[i],&c[i]);
    for (i=1;i<=n;i++)
         jie(a[i],b[i],c[i]);
     return 0;
    }

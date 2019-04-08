main()
{
 int n,i;
 float a,b,c;
 double  x1,x2;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
    {
     scanf("%f %f %f ",&a,&b,&c);
     if(b*b-4*a*c>0)
       {
        x1=(double )(0-b+sqrt(b*b-4*a*c))/(2*a);
        x2=(double )(0-b-sqrt(b*b-4*a*c))/(2*a);
        printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
       }
     if(b*b-4*a*c==0)
       {
        x1=x2=(double )(0-b)/(2*a);
        printf("x1=x2=%.5lf\n",x1);
       }
     if(b*b-4*a*c<0)
       {
        x1=(double )(sqrt(4*a*c-b*b))/(2*a);
        x2=(double )(0-b)/(2*a);
        printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x2,x1,x2,x1);
       }
    }
} 

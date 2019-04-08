void main()
{   int n,i;
    double a,b,c,d,e,x1,x2;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{   scanf("%lf %lf %lf",&a,&b,&c);
	    if(b*b-4*a*c>0.0000000001)
		{  d=(-b+sqrt(b*b-4*a*c))/(2*a);
		   e=(-b-sqrt(b*b-4*a*c))/(2*a);
		   printf("x1=%.5lf;x2=%.5lf\n",d,e);
		}
		else if(b*b-4*a*c<=0.0000000001 && b*b-4*a*c>=-0.0000000001 )
		{  d=(-b)/(2*a);
		   e=(-b)/(2*a);
		   printf("x1=x2=%.5lf\n",d);
		}
		else 
		{  d=-b/(2*a);
		   e=sqrt(4*a*c-b*b)/(2*a);
		   printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",
			  d,e,d,e);
		}
    }
}
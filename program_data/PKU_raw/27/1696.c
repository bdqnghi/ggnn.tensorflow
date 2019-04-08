int main()
{
	int n,i=1;
	double a,b,c,x1,x2,m,e,f;
	scanf("%d",&n);
	while((i<=n)&&a!=0)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		m=b*b-4*a*c;
		e=(-b+sqrt(b*b-4*a*c))/(2*a);
		   f=(-b-sqrt(b*b-4*a*c))/(2*a);
		   if(b!=0)
		   {
		if((e!=f)&&(m>=0))
		{
           x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		   x2=(-b-sqrt(b*b-4*a*c))/(2*a);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		else if((m>=0)&&(e=f))
		{
			x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		printf("x1=x2=%.5lf\n",x1);
		}
		else
		{
			x1=-b/(2*a);
			x2=sqrt(-m)/(2*a);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,x2,x1,x2);
		}
		   }
		   else 
		   {if((e!=f)&&(m>=0))
		{
           x1=(sqrt(b*b-4*a*c))/(2*a);
		   x2=(-sqrt(b*b-4*a*c))/(2*a);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		else if((m>=0)&&(e=f))
		{
			x1=(sqrt(b*b-4*a*c))/(2*a);
		x2=(-sqrt(b*b-4*a*c))/(2*a);
		printf("x1=x2=%.5lf\n",x1);
		}
		else
		{
			x1=-b/(2*a);
			x2=sqrt(-m)/(2*a);
			printf("x1=-0.00000+%.5lfi;x2=-0.00000-%.5lfi\n",x2,x2);
		}
		   }
		   i++;
	}
return 0;
}



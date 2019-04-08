int main()
{
	int n;
	scanf("%d",&n);
	int i;
    double a,b,c;
	double t;
	
	double p,q;
	double x1,x2;
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		t=b*b-4*a*c;
		if(t>0)
		{
			if (b==0)
			{
					x1=(sqrt(t))/(2*a);
			        x2=(- sqrt(t))/(2*a);
			}
			else
				
			
			
			
			{
				x1=(-b+sqrt(t))/(2*a);
			    x2=(-b - sqrt(t))/(2*a);
			}
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		else if (t==0)
		{
			if(b==0)
			{
				x1=x2=0;
			}
			else x1=x2=-b/(2*a);
			printf("x1=x2=%.5lf\n",x1);
		}
		else  
		{
			if (b==0)
			{
				p=0.00000;
			}
			else p=-b/(a*2);
			q=sqrt(-t)/(2*a);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",p,q,p,q);
		}
	}
	return 0;
}
/*????:
1."if??\else if??\else"  ??
2.t==0 not t=0*/

			


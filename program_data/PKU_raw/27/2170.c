int main()
{
	int n,i;
	double a,b,c,t,x1,x2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		t=b*b-4*a*c;
		if(t>0)
		{
			x1=(-b+sqrt(b*b-4*a*c))/(2*a);
			x2=(-b-sqrt(b*b-4*a*c))/(2*a);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		else
		{
			if(t==0.0)
			{
				x1=(-b+sqrt(b*b-4*a*c))/(2*a);
				printf("x1=x2=%.5lf\n",x1);
			}
			else
			{
				if(b==0.0)
				{
					x1=(b/(2*a));
					x2=sqrt((4*a*c-b*b)/(4*a*a));
					printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,x2,x1,x2);
				}
				else
				{
					x1=(-b/(2*a));
					x2=sqrt((4*a*c-b*b)/(4*a*a));
					printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,x2,x1,x2);
				}
			}
		}
	}
	return 0;
}
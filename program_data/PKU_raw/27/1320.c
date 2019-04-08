int main()
{
	double a,b,c,d,e,f,g,x1,x2;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		d=b*b-4*a*c;
		if(d>0)
		{
			if(b==0)
			{
				x1=(b+sqrt(d))/(2*a);
				x2=(b-sqrt(d))/(2*a);
				printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
			}
			else
			{
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
			}
			
		}
		else if(d==0)
		{
			x1=(-b)/(2*a);
			printf("x1=x2=%.5lf\n",x1);
		}
		else
		{
			if(b==0)
			{
				e=-d;
			f=sqrt(e)/(2*a);
			g=(-b)/(2*a);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",g,f,g,f);
			}
			else
			{

			e=-d;
			f=sqrt(e)/(2*a);
			g=(-b)/(2*a);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",g,f,g,f);
			}
		}
	}
	return 0;
}

int main(int argc, char* argv[])
{
	int n,i;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		double a,b,c,x1,x2;
		scanf("%lf%lf%lf",&a,&b,&c);
		if (a!=0)
		{
			if ((b*b-4*a*c)>=0)
			{
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		if (x1==x2)
		{
			printf("x1=x2=%.5f\n",x1);
		}
		else
		{
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		}
			else
			{
				double t;
				t=sqrt(4*a*c-b*b)/(2*a);
				x1=-b/(2*a);
				printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,t,x1,t);
			}
		}
	}
	return 0;
}

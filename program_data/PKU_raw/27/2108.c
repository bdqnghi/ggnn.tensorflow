int main()
{
	int n, i;
	double a, b, c, dt;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf%lf", &a, &b, &c);
		dt=b*b-4*a*c;
		if(dt>0)
		{
			printf("x1=%.5f;x2=%.5f\n", (-b+sqrt(dt))/(2*a), (-b-sqrt(dt))/(2*a));
		}
		else if(dt==0)
		{
			if(b==0)
			{
				printf("x1=x2=0\n");
			}
			else
			{
				printf("x1=x2=%.5f\n", -b/(2*a));
			}
		}
		else
		{
			dt=-dt;
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", -b/(2*a), sqrt(dt)/(2*a), -b/(2*a), sqrt(dt)/(2*a));
		}
	}
	return 0;
}
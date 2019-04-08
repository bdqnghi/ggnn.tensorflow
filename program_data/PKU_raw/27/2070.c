


int main()
{
	struct pare
	{
		double a;
		double b;
		double c;
	}p1[k];
	int n;
	scanf("%d",&n);
	int i;
	for(i = 0; i < n; i++)
	{
		scanf("%lf%lf%lf",&p1[i].a,&p1[i].b,&p1[i].c);
	}
	double x1,x2;
	double xx,xs;
	for(i = 0; i < n; i++)
	{
		if( (p1[i].b*p1[i].b) - 4 * p1[i].a * p1[i].c > 0)
		{
			x1 = ( -p1[i].b + sqrt ( p1[i].b*p1[i].b - 4 * p1[i].a * p1[i].c ) ) / (2*p1[i].a);
			x2 = ( -p1[i].b - sqrt ( p1[i].b*p1[i].b - 4 * p1[i].a * p1[i].c ) ) / (2*p1[i].a);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		if( (p1[i].b*p1[i].b) - 4 * p1[i].a * p1[i].c == 0)
		{
			x1 = -p1[i].b / (2*p1[i].a);
			printf("x1=x2=%.5lf\n",x1);
		}
		if( p1[i].b*p1[i].b - 4 * p1[i].a * p1[i].c < 0)
		{
			xs = -p1[i].b  / (2*p1[i].a);
			xx = ( sqrt ( -p1[i].b*p1[i].b + 4 * p1[i].a * p1[i].c ) ) / (2*p1[i].a);
			if ( p1[i].b == 0)
			{
				printf("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n",xx,xx);
			}
			else
			{
				printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",xs,xx,xs,xx);
			}
		}
	}
	return 0;
}


	

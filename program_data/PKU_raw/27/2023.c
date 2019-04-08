int main()
{
	int i, n;
	double *p, a,b,c, dt, x1, x2;
	
	scanf("%d",&n);
	p=malloc(sizeof(double)*3*n);

	for(i=0; i<n; i++)
	{
		scanf("%lf %lf %lf", p+i*3, p+i*3+1, p+i*3+2);
	}

	for(i=0; i<n; i++)
	{
		a=*(p+i*3);
		b=*(p+i*3+1);
		c=*(p+i*3+2);
		dt=b*b-4*a*c;
		
		if(dt>0)
		{
			x1 = (-b + sqrt(dt))/(2*a);
			x2 = (-b - sqrt(dt))/(2*a);
			printf("x1=%.5f;x2=%.5f\n", x1, x2);
		}
		else if(fabs(dt)<0.00001)
		{
			x1=-b/(2*a);
			printf("x1=x2=%.5f\n", x1);
		}
		else
		{
			x1 = (-b)/(2*a);
			if(fabs(x1)<0.00001)
				x1=0;
			x2 = sqrt(-dt)/(2*a);
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", x1, x2, x1, x2);
		}
	}

}

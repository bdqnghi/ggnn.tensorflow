
main()
{
	int n, i;
	/*n = 0;*/
 	scanf("%d",&n);
	float a[100],b[100],c[100];
	double x1, x2;
	for (i=1; i<=n; i++)
	{
		scanf("%f %f %f",&a[i-1], &b[i-1], &c[i-1]);
	}
	for (i=1; i<=n; i++)
	{
		if ((b[i-1]*b[i-1]-4*a[i-1]*c[i-1])>0)
		{
	x1 = (-b[i-1] + sqrt(b[i-1]*b[i-1]-4*a[i-1]*c[i-1]))/(2*a[i-1]);
	x2 = (-b[i-1] - sqrt(b[i-1]*b[i-1]-4*a[i-1]*c[i-1]))/(2*a[i-1]);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		else if ((b[i-1]*b[i-1]-4*a[i-1]*c[i-1]) == 0)
		{
	x1 = (-b[i-1] + sqrt(b[i-1]*b[i-1]-4*a[i-1]*c[i-1]))/(2*a[i-1]);
	x2 = (-b[i-1] - sqrt(b[i-1]*b[i-1]-4*a[i-1]*c[i-1]))/(2*a[i-1]);
			printf("x1=x2=%.5f\n",x1);
		}
		else if ((b[i-1]*b[i-1]-4*a[i-1]*c[i-1]) < 0)
		{
			double i1,i2;
			i1 = sqrt(-b[i-1]*b[i-1]+4*a[i-1]*c[i-1])/(2*a[i-1]);
			i2 = -b[i-1]/(2*a[i-1]);
                        if (i2 == -0.00000)
			{
				i2 = 0.00000;
			}
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",i2,i1,i2,i1);
		}
		
	}
	
}
void main()
{
	int i,n;

	float a[100],b[100],c[100];
	double x1,x2,d;
	scanf ("%d",&n);


	for (i=0;i<=n-1;i++)
	{
		scanf("%f%f%f",&(a[i]),&(b[i]),&(c[i]));
	}
	for (i=0;i<=n-1;i++)
	{
		d=b[i]*b[i]-4*a[i]*c[i];
	
		if (d>0)
		{
			x1=(-b[i])/(2*a[i])+sqrt(b[i]*b[i]-4*a[i]*c[i])/(2*a[i]);
            x2=(-b[i])/(2*a[i])-sqrt(b[i]*b[i]-4*a[i]*c[i])/(2*a[i]);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
        else if(d==0)

		{
			x1=(-b[i])/(2*a[i]);
			printf("x1=x2=%.5f\n",x1);
		}
		else
		{
			x1=-b[i]/(2*a[i]);
			x2=sqrt(-d)/(2*a[i]);
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,x2,x1,x2);
		}
	}
}

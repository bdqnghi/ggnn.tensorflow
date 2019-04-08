void main()
{
	int m,n;
	int i=0,k=0;
	double x_1=1,x_2=1,x_3=2,sum=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		n=0;
		scanf("%d",&n);
		for(k=0;k<n;k++)
		{

			x_3=x_1+x_2;
			sum+=x_3/x_2;
			x_1=x_2;
			x_2=x_3;
		}
		printf("%.3lf\n",sum);
		sum=0;
		x_3=2;x_1=1;x_2=1;
	}


}


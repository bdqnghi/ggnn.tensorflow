int main()
{
	int n,i,j;
	double a[100][2], b,c=0;
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		scanf("%lf%lf", &a[i][0], &a[i][1]);
	}
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			b=sqrt(pow(a[i][0]-a[j][0],2)+pow(a[i][1]-a[j][1],2));
			if (c<b)
				c=b;
		}
	}
	printf("%.4f\n",c);
	return 0;

}

int main()
{
	int n,i,k;
	double point[100][2], s,max=0;
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		scanf("%lf%lf", &point[i][0], &point[i][1]);
	}
	for (i=0;i<n-1;i++)
	{
		for (k=i+1;k<n;k++)
		{
			s=sqrt(pow(point[i][0]-point[k][0],2)+pow(point[i][1]-point[k][1],2));
			if (s>max)
				max=s;
		}
	}
	printf("%.4f\n",max);
	scanf("%d",i);
	return 0;

}
int main()
{
	int m,n;
	double shang[100],sum=0;
	int fenzi[100],fenmu[100];
	int i,j;
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		fenzi[0]=2;
		fenmu[0]=1;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			if(j==0)
			{
				fenzi[0]=2;
				fenmu[0]=1;
				sum=2;
			}
			else
			{
				fenzi[j]=fenzi[j-1]+fenmu[j-1];
				fenmu[j]=fenzi[j-1];
				shang[j]=1.0*fenzi[j]/fenmu[j];
				sum=sum+shang[j];
			}
		}
		printf("%.3lf\n",sum);
		sum=0;
	}
	return 0;
}
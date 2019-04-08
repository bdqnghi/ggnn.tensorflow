int main()
{
	int N[1000][1000];
	int n;
	scanf("%d",&n);
	int i,j,m;
	int a=0,b=0;
	int count=0;
	for(i=0;i<n;i++)
	{
		m=0;
		for(j=0;j<n;j++)
		{
			scanf("%d",&N[i][j]);
			if(N[i][j]==0)
			{
				m++,count++;
			}
		}
	
			if(m>=1)
			{
				a++;
			}
			if(m>b)
			{
				b=m;
			}
	}
			int sum;
			sum=a*b-count;
			printf("%d",sum);
            return 0;
}
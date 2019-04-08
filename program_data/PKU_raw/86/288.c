
int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		int m,sum=60;
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			int a;
			scanf("%d",&a);
			if(a<(sum-3))
			{
			    sum -= 3;
			}
			else if(a>=(sum-3)&&a<=sum)
			{
				sum=a;
			}
		}
			printf("%d\n",sum);
	}
	return 0;
}



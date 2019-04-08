int main()
{
	int num[3],sum[3];
	int i,j,k,t,n,m;
	num[0]=num[1]=num[2]=sum[0]=sum[1]=sum[2]=-10000000;
	scanf("%d",&n);
	for(m=0;m<n;m++)
	{
		scanf("%d%d%d",&i,&j,&k);
		j+=k;
		if(sum[2]<j)
		{
			sum[2]=j;
			num[2]=i;
			if(sum[2]>sum[1])
			{
				t=sum[2];
				sum[2]=sum[1];
				sum[1]=t;
				t=num[2];
				num[2]=num[1];
				num[1]=t;
				if(sum[1]>sum[0])
				{
					t=sum[0];
					sum[0]=sum[1];
					sum[1]=t;
					t=num[0];
					num[0]=num[1];
					num[1]=t;
				}
			}
		}
	}
	for(i=0;i<3;i++)
		printf("%d %d\n",num[i],sum[i]);
	return 0;
}
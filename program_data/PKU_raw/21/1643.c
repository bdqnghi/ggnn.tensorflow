int main()
{
	int n,sum=0,i,m[350],max,j,cha[350];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
		sum=sum+m[i];
	}
	cha[0]=abs(m[0]*n-sum);
	max=cha[0];
	j=0;
	for(i=1;i<n;i++)
	{
		cha[i]=abs(m[i]*n-sum);
		if(cha[i]>max)
		{
			max=cha[i];
			j=i;
		}
	}
	for(i=0;i<n;i++)
	{
		if(cha[i]==max)
		{
			if(i==j)
			{
				printf("%d",m[i]);
			}
			else
			{
				printf(",%d",m[i]);
			}
		}
	}
	return 0;
}

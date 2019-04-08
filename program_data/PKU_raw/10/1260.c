int main()
{
	int k,i,j,max,a[30]={0},limit[30]={0},num[30]={0};
	scanf("%d",&k);
	for(i=k-1;i>=0;i--)
	{
		scanf("%d",&a[i]);
	}
	num[0]=1;
	limit[0]=a[0];
	for(i=1;i<k;i++)
	{
		max=1;
		for(j=0;j<i;j++)
		{
			if((a[i]>=limit[j]) && ((num[j]+1)>=max))
			{
				max=num[j]+1;
			}
		}
		limit[i]=a[i];
		num[i]=max;
	}
	max=0;
	for(i=0;i<k;i++)
	{
		if(num[i]>max) max=num[i];
	}
	printf("%d",max);
	return 0;
}
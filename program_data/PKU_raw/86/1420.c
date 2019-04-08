int main()
{
	int a[21];
	int m,n,j,i,sum,sum1;
	scanf("%d",&m);
	for(j=1;j<=m;j++){
	scanf("%d",&n);
	sum=sum1=0;
	for(i=1;i<=20;i++)
	{
		a[i]=0;
	}
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=20;i++)
	{
		if((a[i]<=60-(i-1)*3)&&a[i]!=0)
		{
			sum=a[i];
			sum1=a[i]+3*i;
		}
		if(a[i]==0)
		{
			sum=sum+60-sum1;
			sum1=60;
		}
		if(sum1>=60)
		{
			break;
		}
	}
	if(n==0)
	{
		printf("60\n");
	}
	else
	{
		printf("%d\n",sum);
	}
	}
	return 0;
}
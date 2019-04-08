
int main()
{
	//zhao su shu
	int n,i,a[10000],j=0,k=0,d,sum=0;
	scanf("%d",&n);
	for(i=3;i<=n;i+=2)
	{
		d=0;
		for(k=2;k<=sqrt(i);k++)
		{
			if(i%k==0)d=1;
		}
		if(d==0)
		{
			j=j+1;
			a[j]=i;
			sum=j;
			
		}
	}
	//suan jian er
	k=0;
	for(j=1;j<=sum;j++)
	{
		if(a[j+1]-a[j]==2)
		{
			printf("%d %d\n",a[j],a[j+1]);
			k++;
		}
	}
	if(k==0)printf("empty\n");
	return 0;
}

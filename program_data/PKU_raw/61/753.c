int main()
{
	int k,i,j,a,m=1,n=1,temp;
	scanf("%d",&k);
	int * sum= (int *)malloc(sizeof(int)*k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a);
		if(a==1||a==2)
			sum[i]=1;
		else
		{
		m=1;n=1;
		sum[i]=0;
		for(j=1;j<=a-2;j++)
		{
			sum[i]=m+n;
			m=n;
			n=sum[i];
		}
		}
	}
	for(i=0;i<k;i++)
		printf("%d\n",sum[i]);
	return 0;
}
	




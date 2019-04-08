
int main()
{
	int n,i,a,k,m;
	int sushu[50000]={0};

	scanf("%d",&a);

	for(m=3;m<50000;m+=2)
	{
		k=(int)sqrt(m);
		for(i=3;i<=k;i++)
			if(m%i==0) break;
		if(i>=k+1) sushu[m]=1;
	}
	sushu[2]=1;

	for(n=6;n<=a;n+=2)
	{
		for(i=3;i<=n/2;i++)
			if(sushu[i] && sushu[n-i])
			{
				printf("%d=%d+%d\n",n,i,n-i);
				break;
			}

	}
	return 0;

}


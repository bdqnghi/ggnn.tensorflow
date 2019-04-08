
void main()
{
	int n,k,i,j;
	scanf("%d",&n);
	for(k=1;k<=5;k++)
	{
		int t=1;
		for(j=1;j<=k;j++)
			t=t*10;
		if((n/t)>=10)
			continue;
		else
		{
			break;
		}
	}
	for(i=1;i<=k;i++)
	{
		int t=1;
		for(j=1;j<=i;j++)
			t=t*10;
		printf("%d",(n%t-n%(t/10))/(t/10));
	}                                                          
	if(n>=10)
	{
    int t=1;
	for(j=1;j<=k;j++)
		t=t*10;
	printf("%d",n/t);
	}
}
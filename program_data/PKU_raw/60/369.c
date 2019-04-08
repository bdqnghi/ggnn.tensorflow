int main()
{
	int i,n,t,s,j;
	scanf("%d",&n);
	if(n<5)printf("empty");
	else
	for(i=3;i<=n-2;i++)
	{
		t=0;
		for(j=2;j<=sqrt(i);j++)if(i%j==0)t=1;
		for(j=2;j<=sqrt(i+2);j++)if((i+2)%j==0)t=1;
		if(t==0)
			printf("%d %d\n",i,i+2);
	}
	return 0;
}


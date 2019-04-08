int checkp(int n)
{
	int i;
	if(n%2==0)
		if(n==2)
			return 1;
		else
			return 0;
	for(i=3;i*i<=n;i=i+2)
		if(n%i==0)
			return 0;
	return 1;
}
int checkr(int n)
{
	int a=0,b;
	b=n;
	while(n/10!=0)
	{
		a=a*10+n%10;
		n=n/10;
	}
	a=a*10+n;
	if(a==b)
		return 1;
	else
		return 0;
}
main()
{
	int m,n,i,j,t=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;++i)
		if(checkp(i)&&checkr(i))
		{
			printf("%d",i);
			t=1;
			break;
		}
	if(t==0)
		printf("no");
	else
		for(j=i+1;j<=n;++j)
			if(checkp(j)&&checkr(j))
				printf(",%d",j);
}



		
		


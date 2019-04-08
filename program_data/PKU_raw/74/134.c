int h(int x)
{
	int r=0,i,y=x;
	for(i=0;;i++)
	{
		if(x==0)
			break;
		else
			r=r*10+x%10,x=x/10;
	}
	return (r==y)?1:0;
}
void main()
{
	int m,n,i,j,u=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(j=2;j<=sqrt(i);j++)
			if(i%j==0)
				break;
		if(j>sqrt(i)&&h(i)==1)
		{
			if(u==0)
				printf("%d",i);
			else
				printf(",%d",i);
			++u;
		}
	}
	if(u==0)
		printf("no\n");
}
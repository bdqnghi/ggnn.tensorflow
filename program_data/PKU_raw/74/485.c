void main()
{
	int huiwen(int x);
	int sushu(int x);
	int m,n;
	int i,t=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
		if((huiwen(i))&&(sushu(i)))
		{
			t++;
			if(t!=1)
				printf(",");
			printf("%d",i);
		}
	if(t==0)
		printf("no\n");
}
int huiwen(int x)
{
	int y=0,t;
	t=x;
	while(x!=0)
	{
		y=y*10+x%10;
		x=x/10;
	}
	if(y==t)
		return(1);
	else
		return(0);
}
int sushu(int x)
{
	int i,t,r=0;
	t=sqrt(x);
	for(i=2;i<=t;i++)
		if(x%i==0)
		{
			r=1;
			break;
		}
	if(r==0)
		return(1);
	else
		return(0);
}


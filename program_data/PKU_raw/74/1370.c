int huiwen(int a)
{
	int k,n=0,m;
	m=a;
	while(m!=0)
	{
		k=m%10;
		n=n*10+k;
		m=m/10;
	}
	if(n==a)
		return(1);
	else
		return(0);
}
int sushu(int a)
{
	int i;
	float l=sqrt(a);
	for(i=2;i<=l;i++)
	{
		if(a%i==0)
			break;
	}
	if(i>l)
		return(1);
	else
		return(0);
}

void main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a=m;
	while((huiwen(a)==0||sushu(a)==0)&&a<=n)
		a++;
	if(a>n)
		printf("no");
	else
	{
		printf("%d",a);
		for(a++;a<=n;a++)
		{
			if(huiwen(a)==1&&sushu(a)==1)
			printf(",%d",a);
		}
	}
}
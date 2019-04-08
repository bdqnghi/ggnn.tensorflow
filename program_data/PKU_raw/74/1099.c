
int sushu(int x)
{
	int i,m,z=1;
	m=(int)sqrt(x);
	for(i=2;i<=m;i++)
		if(x%i==0)
			z=0;
	return z;
}

int huiwen(int x)
{
	int a=0,m,z=0;
	for(m=x;m!=0;)
	{
		a=a*10+m%10;
		m=m/10;
	}
	if(a==x)
		z=1;
	return z;
}

void main()
{
	int m,n,i,j=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
		if(sushu(i) && huiwen(i))
		{
			if(j!=0)
				printf(",");
			j=1;
			printf("%d",i);
		}
	if(j==0)
		printf("no");
	printf("\n");
}
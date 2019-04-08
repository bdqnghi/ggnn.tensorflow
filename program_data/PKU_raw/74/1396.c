int sushu(int n)
{
	int i;
	float l=sqrt(n);
	for(i=2;i<=l;i++)
	{
		if(n%i==0)
		{break;}
	}
	if(i<=l)return(1);
	else return(0);
}
int huiwen(int n)
{
	int m=0,q=0,k=0;
	m=n;
	while(m!=0)
	{
		q=m%10;
		k=k*10+q;
		m=m/10;
	}
	if(n==k)
		return(0);
	else return(1);
}

void main()
{
	int m,n,i;
	scanf("%d%d",&m,&n);
	i=m;
	while((sushu(i)==1||huiwen(i)==1)&&i<=n)
		i++;
	if(i>n)
		printf("no");
	else
	{
		printf("%d",i);
		for(i++;i<=n;i++)
			if(sushu(i)==0&&huiwen(i)==0)
				printf(",%d",i);
	}
}

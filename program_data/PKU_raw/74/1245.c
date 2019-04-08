int p(int n)
{
	int i,flag=0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
int rever(int n)
{
	int i=0,a[30],m,flag=0;
	while(n>9)
	{
		a[i]=n%10;
		n=(n-a[i])/10;
		i++;
	}
	a[i]=n;
	m=i+1;
	for(i=0;i<m/2;i++)
	{
		if(a[i]!=a[m-1-i])
		{
			flag=1;
			break;
		}
	}
	return flag;
}
void main()
{
	int n1,n2,i,j=0,m[100];
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		if(p(i)==0&&rever(i)==0)
			m[j++]=i;
	}
	if(j==0)
		printf("no\n");
	else
	{
	for(i=0;i<j-1;i++)
		printf("%d,",m[i]);
	printf("%d\n",m[i]);
	}
}

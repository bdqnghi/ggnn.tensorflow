
int p(int n)
{
	int i,j;
	j=sqrt(n);
	if(n%2==0)
		return 0;
	else
	{
		for(i=3;i<=j;)
		{
			if(n%i==0)
			break;
			i=i+2;
		}
		if(i>j)
			return 1;
		else
			return 0;
	}
}		
void main()
{
	int n,m,i,j;
	scanf("%d",&n);
	for(m=6;m<=n;)
	{
		for(i=2;i<=(m/2);i++)
		{
			j=m-i;
		if(p(i)==1 && p(j)==1)
			break;
		}
		printf("%d=%d+%d\n",m,i,j);
		m=m+2;
	}
}
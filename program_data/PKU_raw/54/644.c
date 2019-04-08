int first(int n,int k)
{
	int total,i,j,cons;
	for(i=1;;i++)
	{
        total=i*n+k*n;
		for(j=1;j<n;j++)
		{
			total=total*n/(n-1);
			if(total%n!=0)break;
		}
		if(j==n)
		{
			cons=i*n+k;
			break;
		}
	}
	return cons;
}
int houzi(int n,int k,int m)
{
	int num;
	if(n!=1)
	{
		num=(houzi(n-1,k,m))*m/(m-1)+k;
	}
	if(n==1)
	{
		num=first(m,k);
	}
	return num;
}
void main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	printf("%d",houzi(n,k,n));
}
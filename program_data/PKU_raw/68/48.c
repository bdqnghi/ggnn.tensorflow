int isprimenumber(int m)
{
	int i,isprime=1;
	if (m%2==0)
	{
		if(m==2)
		{
		return isprime;
		}
		isprime=0;
		return isprime;
	}
	for(i=3;i<=sqrt(m);i=i+2)
	{
		if(m%i==0)
		{
			isprime=0;
			break;
		}
	}
	return isprime;
}

void gb(int a)
{
	int j;
	printf("%d=",a);
	for(j=2;j<=(a/2);j=j+1)
	{
		if((isprimenumber(j))&&(isprimenumber(a-j)))
		{
			printf("%d+%d\n",j,a-j);
		    break;
		}
	}
}

int main()
{
	int n,k;
	scanf("%d",&n);
	for (k=6;k<=n;k=k+2)
	{
		gb(k);
	}
	return 0;
}




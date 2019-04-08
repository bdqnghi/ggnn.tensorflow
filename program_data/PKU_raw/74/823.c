
int isHuiWen(int n)
{
	int m = n;
	int a=0;
	while(m)
	{
		a = a * 10 + m % 10;
		m /= 10;
	}
	return(a==n);
}

int isPrime(int n)
{
	double max = sqrt((double)n);
	for(int i = 2;i<=max;i++)
	{
		if(n%i == 0)
			return 0;
	}
	return 1;
}

int main(void)
{
	int m,n;
	int j = 0;
	scanf("%d%d",&m,&n);
	for(int i = m;i<=n;i++)
	{
		if(isHuiWen(i)&&isPrime(i))
		{
			if(j)printf(",");
			printf("%d",i);
			j++;
		}
	}
	if(j == 0)
		printf("no");
	return 0;
}

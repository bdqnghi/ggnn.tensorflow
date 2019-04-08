int prime(int n)
{
	int i=0, t=0;
	float f=0;
	f=sqrt(n);
	t=(int)f;
	if(n<=10)
	{
		if((n==2)||(n==3)||(n==5)||(n==7)) return(1);
		else return(0);
	}
	else
	{
		if(n%2==0) return(0);
		else
		{	for(i=3;i<=t;i++)
			{
				if(n%i==0) break;
			}
			if(i==t+1) return(1);
			else return(0);
		}
	}
}
void divide(int a)
{
	int i;
	for(i=2;i<=a;i++)
	{
		if((prime(i)==1)&&(prime(a-i)==1))
			break;
	}
	printf("%d=%d+%d\n", a, i, a-i);
}
int main()
{
	int m, n;
	int i, j;
	scanf("%d", &m);
	if(m>=6)
	{
		for(i=6;i<=m;i=i+2)
			divide(i);
	}
}
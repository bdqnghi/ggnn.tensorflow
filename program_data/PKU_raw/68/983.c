
int f(int x)
{
	int i;
	for( i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return 0;
		return 1;
		
}
void Gede(int n)
{
	int i;
	for(i=3;i<=(n/2);i++)
	{
		if((f(i))&&(f(n-i)))
		{
			printf("%d=%d+%d\n",n,i,n-i);
			break;
		}
	}
}

int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
			Gede(i);
		return 0;
}
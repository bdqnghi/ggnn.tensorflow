//?????
int f(int a)
{
	int i;
	int l=(float)sqrt((float)a);
	for(i=2;i<=l;i++)
		if(a%i==0)
		{
			break;
			return 0;
		}
	if(i==l+1)
		return 1;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	if (n%2!=0)
		return 0;
	else
	{
		for(i=3;i<=n/2;i=i+2)
			if(f(i)==1&&f(n-i)==1)
				printf("%d %d\n",i,n-i);
	}
	return 0;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for (i=3;i<=(n/2);i=i+2)
		if (check(i)&&check(n-i))
			printf("%d %d\n",i,n-i);
}

int check(int a)
{
	int i;
	for (i=2;i<=sqrt(a);i++)
		if (a%i==0) return 0;
	return 1;
}
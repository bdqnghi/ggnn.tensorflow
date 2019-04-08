
int main()
{
	int a[50002]={0},i,j,n;
	for (i=2;i<=50000;i++)
	{
		if (a[i]) continue;
		for (j=2;j<=50000/i;j++) a[i*j]=1;
	}
	scanf("%d",&n);
	for (i=6;i<=n;i+=2)
	{
		for (j=3;j<=i/2;j+=2)
			if (!a[j] && !a[i-j]) break;
		printf("%d=%d+%d\n",i,j,i-j);
	}
	return 0;
}
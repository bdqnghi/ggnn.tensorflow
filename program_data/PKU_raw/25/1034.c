int main()
{
	int a[100]={0},t=0,i,j,n;
	scanf("%d",&n);
	a[1]=1;
	for (i=1;i<=n;i++)
	{
		for (j=90;j>=1;j--)
		{
			a[j]*=2;
			a[j+1]+=a[j]/10;
			a[j]=a[j]%10;
		}
	} 
	n=99;
	while (n)
	{
		if (a[n]) t=1;
		if (t) printf("%d",a[n]);
		n--;
	}
}
void main ()
{
	int n,sum,i;
	sum=0;
	int a[2];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a[1]=i%10;
		a[0]=(i-i%10)/10;
		if(a[1]!=7&&a[0]!=7&&i%7!=0)
			sum=sum+pow(i,2);
	}
	printf("%d\n",sum);
}
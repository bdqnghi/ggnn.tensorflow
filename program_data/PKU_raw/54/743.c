int main()
{
	int a[100],b,i,j,n,k;
	scanf("%d %d",&n,&k);
	for(j=1;j<2000000;j++)
	{
		b=j;
		a[n]=b*n+k;
		for(i=n;i>=1;i--)
		{
			if((n*a[i]+n*k-k)%(n-1)==0)
				a[i-1]=(n*a[i]+n*k-k)/(n-1);
			else
				break;
		}
		if(i<=1)
			break;
	}
	printf("%d\n",a[1]);
	return 0;
}
			


int main()
{
	int n,i,a[5]={0};
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		a[i]=n%10;
		n=n/10;
		if(n==0)
			break;
	}
	for(i=0;i<5;i++)
	{
		if(a[i]==0)
		    break;
		printf("%d",a[i]);
	}
	return 0;
}
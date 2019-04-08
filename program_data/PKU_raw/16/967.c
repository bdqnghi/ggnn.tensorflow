void main()
{
	int i,j,n,a[10];
	scanf("%d",&n);
	if(n==0)printf("0");
	for(i=0;n!=0;i++)
	{
		a[i]=n%10;
		n=n/10;
	}
	for(j=0;j<i;j++)
		printf("%d",a[j]);
}




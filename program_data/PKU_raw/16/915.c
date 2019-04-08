int main()
{
	int n,i=0,j,a[6]={0};
	scanf("%d",&n);
	if(n==0) printf("0");
	while(n!=0)
	{
		a[i++]=n%10;
		n/=10;
	}
	for(j=0;j<i;j++)
	printf("%d",a[j]);
	return 0;
}


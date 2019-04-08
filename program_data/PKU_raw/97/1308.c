int main()
{
	int n,b[6]={100,50,20,10,5,1},c[6],i,sum=0;
	scanf("%d",&n);
	c[0]=n-n%100;
    c[1]=n-c[0]-(n-c[0])%b[1];
	for(i=2;i<6;i++)
	{
		sum=sum+c[i-1];
		c[i]=n-sum-c[0]-(n-sum-c[0])%b[i];
	}
	for(i=0;i<6;i++)
	{
		printf("%d\n",c[i]/b[i]);
	}
	return 0;
}

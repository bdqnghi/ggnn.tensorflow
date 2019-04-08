int f(int a,int b)
{
	int k1,k2;
	int i,j;
	k1=sqrt(a);
	for(i=2;i<=k1;i++)
		if(a%i==0)
			break;
	k2=sqrt(b);
	for(j=2;j<=k2;j++)
		if(b%j==0)
			break;
	if(i>=k1+1&&j>=k2+1)
		return(1);
	else
		return(0);
}
void main()
{
	int n;
	int p=0,i,q=0;
	scanf("%d",&n);
	for(i=3;i<=n-2;)
	{
		p=f(i,i+2);
		if(p==1)
		{
			printf("%d %d\n",i,i+2);
			q++;
		}
		i=i+2;
	}
	if(q==0)
		printf("empty\n");
}
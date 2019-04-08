int main()
{
	int n,a,b,i,j=0,k=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&a,&b);
		if((a>=90)&&(a<=140)&&(b>=60)&&(b<=90))
		{
			j++;
		}
		else 
		{
			k=(k>j)?k:j;j=0;
		}
	}
	k=(k>j)?k:j;
	printf("%d",k);
	return 0;
}

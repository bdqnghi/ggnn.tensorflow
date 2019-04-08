int main()
{
	
	int n;
	scanf("%d",&n);
	int i,j=0,k=0,h=1,a;
	for(i=1;i<=n*n;i++)
	{
		scanf("%d",&a);
		if(a==255)
			j++;
		if(a==0)break;
	}
	for(i=1;i<=n*n-j-1;i++)
	{
		scanf("%d",&a);
		if(a==255)
		{
			k++;
		}
		if(a==0)
		{   
			k=0;
			h++;
		}
	}
	int x;
	x=(n-j%n-k%n-2)*(h-2*(n-j%n-k%n))/2;
	printf("%d\n",x);
	return 0;
}

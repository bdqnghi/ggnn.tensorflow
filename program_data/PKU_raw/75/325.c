int a[2][100000];
int add(int i,int n)
{
	int k,temp=0;
	for(k=1;k<=n;k++)
		if(a[0][k]<=i&&a[1][k]>i)
			temp++;
	return temp;
}
void main()
{
	int i=1,n;
	char c;
	scanf("%d",&a[0][i]);
	c=getchar();
	i++;
	while(c!='\n')
	{	
		scanf("%d",&a[0][i]);
		c=getchar();
		i++;
	}
	printf("%d ",i-1);
	i=1;
	scanf("%d",&a[1][i]);
	c=getchar();
	i++;
	while(c!='\n')
	{	
		scanf("%d",&a[1][i]);
		c=getchar();
		i++;
	}
	n=i-1;
	int result=0;
	for(i=0;i<=1000;i++)
	{
		int temp=add(i,n);
		if(result<temp)
			result=temp;
	}
	printf("%d",result);
}
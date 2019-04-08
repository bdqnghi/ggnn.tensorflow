int issushu(int n);
int a[1000],b[1000];
int main()
{
	int n,j,q,i,count=0;
	scanf("%d",&n);
	for(i=2;i<=(n/2);i++)
	{
		j=issushu(i);
		q=issushu(n-i);
		if((j==1)&&(q==1))
		{
			a[count]=i;
			b[count]=n-i;
			count++;
		}
	}
	if(count!=0){
	for(i=0;i<count;i++)
	{
		printf("%d %d\n",a[i],b[i]);
	}}
	return 0;
}
int issushu(int n)
{
	int i,flag=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=0;
		}
	}
	return flag;
}
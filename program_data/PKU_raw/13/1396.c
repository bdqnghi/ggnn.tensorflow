int main()
{
	int a[20000],i,n,j,flag;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{for(j=i-1;j>=0;j--)
	{if(a[i]==a[j])
	{flag=1;
	break;}
	else
	{flag=0;
	continue;}}
	if(flag==0)
		printf(" %d",a[i]);}
	return 0;
}
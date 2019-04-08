void main()
{
	int a,k,i,n;
	int zhaodao(int a);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{

	scanf("%d",&a);
	k=zhaodao(a);
	printf("%d\n",k);
	}
}
int zhaodao(int a)
{
	if(a==1||a==2)
		return(1);
	else
		return(zhaodao(a-1)+zhaodao(a-2));
}

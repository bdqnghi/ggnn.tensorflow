void main()
{
	int n,i,a,b,max,sub,temp;
	scanf("%d %d",&n,&a);
max=a;sub=a;
for(i=1;i<=(n-1);i++)
{	
	scanf("%d",&b);
	if(max<b)
	{temp=max;max=b;sub=temp;}
	if(sub<b&&b<max)
		sub=b;}
	printf("%d\n%d",max,sub);
}

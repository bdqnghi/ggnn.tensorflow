int turn(int a,int b)
{
	int i,k;
	if(a==b)
		k=a;
	if(a>b)
	{
		k=turn(a/2,b);
	}
	if(a<b)
	{
		k=turn(a,b/2);
	}
	return k;
}
void main()
{
	int a,b;
		scanf("%d%d",&a,&b);
		printf("%d",turn(a,b));
}
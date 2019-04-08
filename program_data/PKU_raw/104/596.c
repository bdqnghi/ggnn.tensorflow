int erchashu(int a,int b)
{
	if(a==b) return(a);
	if(a>b) return(erchashu(a/2,b));
	if(a<b) return(erchashu(a,b/2));
}
void main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=erchashu(a,b);
	printf("%d",c);
}
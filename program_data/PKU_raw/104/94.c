int er(int x,int y)
{
	if(x>y)
		return er(x/2,y);
	if(x<y)
		return er(x,y/2);
	if(x==y)
		return x;
}
void main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d",er(x,y));
}
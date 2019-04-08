int result(int x,int y)
{
	int t=0;
	if(x==y)
		t=x;
	else if(x>y)
		t=result(x/2,y);
	else if(x<y)
		t=result(x,y/2);
	return t;
}
void main()
{
	int m=0,n=0;
	scanf("%d%d",&m,&n);
	printf("%d",result(m,n));
  
}
int main()
{   
    int xunzhao(int x,int y);
	int x,y,q;
	scanf("%d %d",&x,&y);
	q=xunzhao(x,y);
	printf("%d",q);
	
}
int xunzhao(int x,int y)
{
	int q;
	if(x==y)
	q=x;
	if(x>y)
	return  xunzhao(x/2,y);
	if(x<y)
	return  xunzhao(x,y/2);	
	return q;
}
int luo(int x,int y)
{
    int r1,r2,c;
	if(x==y)
		return x;
	else 
	{
		r1=log((double)x)/(log(2.0));
	    r2=log((double)y)/(log(2.0));
	    if(r1>=r2)
		{
			x=x/2;
		    luo(x,y);
		}
		else
		{
			y=y/2;
			luo(x,y);
		}
	}
}
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d",luo(x,y));
	
	return 0;
}
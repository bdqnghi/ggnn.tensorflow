int main()
{
	int f(int x,int y);
	int t, m[25]={0}, n[25]={0}, i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
		scanf("%d%d", &m[i], &n[i]);
	for(i=0;i<t;i++)
		printf("%d\n", f(m[i],n[i]));
	return 0;
}
int f(int x,int y)
{
	if(y==1) return(1);
	else
	{
		int empty,full;
	    if(x<y) full=0;
	    if(x==y) full=1;
	    if(x>y) full=f(x-y,y);
	    empty=f(x,y-1);
	    return(empty+full);
	}
}
    

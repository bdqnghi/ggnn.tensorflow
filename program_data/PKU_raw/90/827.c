main()
{
	int t,m,n;
	int f(int x,int y);
	scanf("%d",&t);
	while(t--)
	{
       scanf("%d %d",&m,&n);
	   printf("%d\n",f(m,n));
	}
	return 0;
}
int f(int x,int y)
{
	int s;
	s=0;
	if(y>1&&x-y>=0) s=s+f(x,y-1)+f(x-y,y);
	else if(y>1) s=s+f(x,y-1);
	else s=s+1;
	return (s);
}

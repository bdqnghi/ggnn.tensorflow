int main ()
{
	int i=1,m,n,t;
	scanf("%d",&t);
	int sort(int,int);
	while(i<=t)
	{
		int k;
		scanf("%d%d",&m,&n);
		k=sort(m,n);
		printf("%d\n",k);
	    i++;
	}
}
int sort(int x,int y)
{
	int z;
    if(y==1) return 1;
	else 
	{
		if(x>=y)
			return(sort(x,y-1)+sort(x-y,y));
		else 
			return(sort(x,y-1));
	}
	return z;
}
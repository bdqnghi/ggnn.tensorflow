int main()
{
	int s(int x,int y);
	int t,m[30],n[30],i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&m[i],&n[i]);
		printf("%d\n",s(m[i],n[i]));	
	}
	return 0;
}

int s(int x,int y)
{
	int z;
	if(x==0||y==0)
	{
		z=1;
	}
	else if(x==1||y==1)
	{
		z=1;
	}
    else if(x<y)
	{
		z=s(x,y-1);
	}
	else
	{
	    z=s(x,y-1)+s(x-y,y);
	}
	return z;
}
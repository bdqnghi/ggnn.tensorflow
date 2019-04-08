void main()
{
	int put(int x,int y);
	int m[100],n[100],t,k[100],i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
		scanf("%d %d",&m[i],&n[i]);
	for(i=1;i<=t;i++)
	{
		k[i]=put(m[i],n[i]);
		printf("%d\n",k[i]);
	}
}
int put(int x,int y)
{
	
	if(y==1)
		return(1);
	else if(x>y)
		return(put(x-y,y)+put(x,y-1));
	else if(x<=y&&x!=1)
		return(put(x,x-1)+1);
	else
		return(1);

		

	
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
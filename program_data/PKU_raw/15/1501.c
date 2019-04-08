int main()
{
	int n,rol,col,a,b,c,d,x;
	int sz1[100][100];
	scanf("%d",&n);
	for(rol=0;rol<n;rol++)
	{
		for(col=0;col<n;col++)
		{
			scanf("%d",&(sz1[rol][col]));
		}
	
	}
	for(rol=0;rol<n;rol++)
	{
		for(col=0;col<n;col++)
		{
			if(sz1[rol][col]==0)
			{
				b=col;
				break;
			}
		}
	}
	for(col=0;col<n;col++)
	{
		for(rol=0;rol<n;rol++)
		{
			if(sz1[rol][col]==0)
			{
				a=rol;
				break;
			}
		}
	} 
	for(col=b;col<n;col++)
	{
		if(sz1[a][col]!=0)
		{
			d=col-1;
			break;
		}
	}
	
	for(rol=a;rol<n;rol++)
	{
		if(sz1[rol][d]!=0)
		{
			c=rol-1;
			break;
		}
	}
	 
    x=(c-a-1)*(d-b-1);
	printf("%d",x);
	return 0;
}

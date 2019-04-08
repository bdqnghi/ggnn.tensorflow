int rt1(int x,int y);
int rt2(int x,int y);
int rt3(int x,int y);
int rt4(int x,int y);
int sz[100][100];
int sr[100][100];
int sc[10000];
int p=0,q=0;
int count=0;
int flag=1;
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int i,j;
	for (i=0;i<100;i++)
	{
		for (j=0;j<100;j++)
		{
			sz[i][j]=1;
		}
	}
    	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			sz[i][j]=-2;
		}
	}
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d",&sr[i][j]);
		}
	}
	sz[0][0]=1;
    
	int limit=m*n;
	while (count<=limit-1)
	{
		switch (flag%4)
		{
		case 1:
        {
				(p,q)=rt1(p,q);
				count=count+1;
				break;
		}
		case 2:
			{
				(p,q)=rt2(p,q);
				count=count+1;
				break;
		}
		case 3:
			{
			    (p,q)=rt3(p,q);
				count=count+1;
				break;
		}
		case 0:
				{
				(p,q)=rt4(p,q);
				count=count+1;
				break;
		}
	}

}
	for (i=0;i<m*n;i++)
	{
		
			printf("%d\n",sc[i]);
		
	} 
	return 0;
}
int rt1(int x,int y)
{
	sz[q][p]=sr[q][p];
	sc[count]=sz[q][p];
	p=x+1;
	q=y;
	if (sz[q][p]>0)
		{
		    flag=flag+1;
			p=p-1;
			q=q+1;
		}
	
	return (p,q);
}
int rt2(int x,int y)
{
	sz[q][p]=sr[q][p];
	sc[count]=sz[q][p];
	p=x;
	q=y+1; 
    if (sz[q][p]>0)
	{
		    flag=flag+1;
			q=q-1;
			p=p-1;
		}

	
	return (p,q);

}
int rt3(int x,int y)
{
	sz[q][p]=sr[q][p];
	sc[count]=sz[q][p];
	p=x-1;
	q=y;
	if (sz[q][p]>0)
	{
		    flag=flag+1;
			p=p+1;
			q=q-1;
		}
	
	return (p,q);
}
int rt4(int x,int y)
{
		sz[q][p]=sr[q][p];
		sc[count]=sz[q][p];
	p=x;
	q=y-1;
	if (sz[q][p]>0)
	{
		    flag=flag+1;
			q=q+1;
			p=p+1;
		}
	
	return (p,q);
}

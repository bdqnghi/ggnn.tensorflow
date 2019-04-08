int m,n,i,j,r;
int ch[8][8];
int max(int x)
{
	int j,p;
	p=ch[x][0];
	for(j=0;j<n;j++)
	{
		if(ch[x][j]>p)
			p=ch[x][j];
	}
	return(p);
}

int min(int y)
{
	int i,p;
	p=ch[0][y];
	for(i=0;i<m;i++)
	{
		if(ch[i][y]<p)
			p=ch[i][y];
	}
	return(p);
}

int main()
{
	r=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d ",&ch[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if((ch[i][j]==max(i))&&(ch[i][j]==min(j)))
			{
				printf("%d+%d\n",i,j);
				r++;
			}
		}
	}
	if(r==0)
		printf("No\n");
}

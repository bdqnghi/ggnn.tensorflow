
int max(int a,int b,int c,int d,int e);
int min(int a,int b,int c,int d,int e);

int main() 
{ 
	int sz[5][5];
	int row=0;
	int col=0;
	int refer=0;
	for(row=0;row<5;row++)
	{
		for(col=0;col<5;col++)
		{
			scanf("%d",&sz[row][col]);
		}
	}
	for(row=0;row<5;row++)
	{
		for(col=0;col<5;col++)
		{
			if(sz[row][col]==max(sz[row][0],sz[row][1],sz[row][2],sz[row][3],sz[row][4]) && sz[row][col]==min(sz[0][col],sz[1][col],sz[2][col],sz[3][col],sz[4][col]))
			{
				refer=1;
				printf("%d %d %d\n",row+1,col+1,sz[row][col]);
			}
		}
	}
	if(refer==0)
	{
		printf("not found");
	}
	return 0;
} 

int max(int a,int b,int c,int d,int e)
{
	int x=a;
	if(b>x)
	{
		x=b;
	}
	if(c>x)
	{
		x=c;
	}
	if(d>x)
	{
		x=d;
	}
	if(e>x)
	{
		x=e;
	}
	return x;
}

int min(int a,int b,int c,int d,int e)
{
	int x=a;
	if(b<x)
	{
		x=b;
	}
	if(c<x)
	{
		x=c;
	}
	if(d<x)
	{
		x=d;
	}
	if(e<x)
	{
		x=e;
	}
	return x;
}
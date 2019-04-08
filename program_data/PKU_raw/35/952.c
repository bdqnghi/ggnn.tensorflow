

int main(int argc, char* argv[])
{
	int sz[8][8];
	int ROW,COL,i,j;
	scanf("%d,%d",&ROW,&COL);
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	int p,q;
	int t;
	t=0;

	for(i=0;i<ROW;i++)
	{
		p=0;
	    q=0;
		for(j=0;j<COL;j++)
		{
			if(sz[i][j]>sz[i][q])
			{
				p=i;
				q=j;
			}
		}
		for(i=0;i<ROW;i++)
		{
			if(sz[p][q]>sz[i][q])
			{
				t=1;
			}
		}
		if(t==0)
			break;

	}
	if(t==1)
	{
		printf("No");
	}
	else if(t==0)
	{
		printf("%d+%d",p,q);
	}


	return 0;
}

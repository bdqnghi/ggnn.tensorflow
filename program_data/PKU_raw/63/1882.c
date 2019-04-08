// ????.cpp : ??????????????
//



int main()//(int argc, _TCHAR* argv[])
{
	int x1,y1,x2,y2,i,j,t;
	int a[100][100],b[100][100],c[100][100];
	scanf("%d %d",&x1,&y1);
	for(i=0;i<=x1-1;i++)
	{
		for(j=0;j<=y1-1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&x2,&y2);
	for(i=0;i<=x2-1;i++)
	{
		for(j=0;j<=y2-1;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<=x1-1;i++)
	{
		for(j=0;j<=y2-1;j++)
		{
			c[i][j]=0;
			for(t=0;t<=y1-1;t++)
			{
				c[i][j]=c[i][j]+a[i][t]*b[t][j];
			}
		}
	}
	for(i=0;i<=x1-1;i++)
	{
		printf("%d",c[i][0]);
		for(j=1;j<=y2-1;j++)
		{
			printf(" %d",c[i][j]);
		}
		printf("\n");
	}


}


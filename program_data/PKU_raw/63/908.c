
int main()
{
	int x1,y1,X,Y,i;
	scanf("%d%d",&x1,&y1);
	int a[100][100];
	for(X=0;X<x1;X++)
	{
		for(Y=0;Y<y1;Y++)
		{
			scanf("%d",&a[X][Y]);
		}
	}
	int x2,y2;
	scanf("%d%d",&x2,&y2);
	int b[100][100];
	for(X=0;X<x2;X++)
	{
		for(Y=0;Y<y2;Y++)
		{
			scanf("%d",&b[X][Y]);
		}
	}
	int c[100][100];
		for(X=0;X<100;X++)
	{
		for(Y=0;Y<100;Y++)
		{
			c[X][Y]=0;
		}
	}
	for(X=0;X<x1;X++)
	{
		for(Y=0;Y<y2;Y++)
		{
			for(i=0;i<x2;i++)
			c[X][Y]+=(a[X][i]*b[i][Y]);
		}
	}
	for(X=0;X<x1;X++)
	{
		for(Y=0;Y<y2;Y++)
		{
			if((Y+1)%y2!=0)
				printf("%d ",c[X][Y]);
			else
				printf("%d\n",c[X][Y]);
		}
	}
	return 0;
}
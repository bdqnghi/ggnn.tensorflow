int n,m,p;
int main()
{
	int q,i,j,matrix[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	scanf("%d %d",&n,&m);
	int a=n;
	int b=m;
	int t[5],c;
	if(a<5&&a>=0&&b<5&&b>=0)
	{
		for(c=0;c<5;c++)
		{
			t[c]=matrix[b][c];
			matrix[b][c]=matrix[a][c];
			matrix[a][c]=t[c];
			p=1;
		}
	}
	else
	{
		p=0;
	}
	q=p;
	if(q==0)
	{
		printf("error");
	}
	else if(q==1)
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(j==4)
				{
					printf("%d\n",matrix[i][j]);
				}
				else
				{
					printf("%d ",matrix[i][j]);
				}
			}
		}
	}
	return 0;
}
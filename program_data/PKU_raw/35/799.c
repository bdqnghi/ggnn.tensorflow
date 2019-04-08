int main()
{
	int juzhen[M][M],y,x;
	scanf("%d,%d",&y,&x);
	int i,j,k;				//k=y'
	for(i=0;i<y;i++)
	{
		for(j=0;j<x;j++)
		{
			scanf("%d",&juzhen[i][j]);	
		}
	}
	int max=0,maxy,maxx;
	for(i=0;i<y;i++)
	{
		for(j=0;j<x;j++)
		{
			if(juzhen[i][j]>max)
			{
				maxy=i;
				maxx=j;
				max=juzhen[i][j];
			}
		}
		int jishu=0;
		for(k=0;k<y;k++)
		{
			if(juzhen[k][maxx]<juzhen[maxy][maxx])
			{
				break;
			}
			else
			{
				jishu++;
			}
			if(jishu==y)
			{
				printf("%d+%d",maxy,maxx);
				return 0;
			}
		}

	}
if(i==y,j==x)
{
	printf("No");
}	
return 0;
}

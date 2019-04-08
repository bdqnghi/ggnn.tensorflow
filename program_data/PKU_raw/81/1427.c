int jhsz(int sz[5][5],int m,int n);
int main()
{
	int sz[5][5],m,n,i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d ",&sz[i][j]);
		}
	}
	scanf("%d%d",&m,&n);

	sz[5][5]=jhsz(sz,m,n);

	return 0;
}

int jhsz(int sz[5][5],int m,int n)
{
    int i,j,jh[5];

	if(m>4||n>4){
		printf("error");
	}else
	{
		for(j=0;j<5;j++)
		{
			jh[j]=sz[m][j];
			sz[m][j]=sz[n][j];
			sz[n][j]=jh[j];
		}
		for(i=0;i<5;i++)
		{
		    for(j=0;j<4;j++)
			{
			    printf("%d ",sz[i][j]);
			}
			printf("%d\n",sz[i][4]);
		}
	}
	return sz[5][5];
}
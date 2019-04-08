
int num[15][20]={0};

int main()
{
	int i,j,k;
	int div(int);

	for(i=0,j=0;;)
	{
		scanf("%d",&num[i][j]);
		if(num[i][j]==-1) break;
		if(num[i][j]==0) 
		{
			j=0;
			i++;
			continue;
		}
		j++;
	}

	for(k=0;k<i;k++)
		printf("%d\n",div(k));
	return 0;
}

int div(int n)
{
	int i,j,k=0;
	
	for(i=0;num[n][i];i++)
		for(j=i;num[n][j];j++)
			if(num[n][i]==2*num[n][j] || num[n][j]==2*num[n][i])
			{
				k++;
			}
	return k;
}

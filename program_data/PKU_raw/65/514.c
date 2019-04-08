int main()
{
	int sz[100][2];
	int a=0,b=0;
	int n,i,j;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
    for(i=0;i<n;i++)
	{
		if((sz[i][0]==0&&sz[i][1]==1)||(sz[i][0]==1&&sz[i][1]==2)||(sz[i][0]==2&&sz[i][1]==0))
			a++;
		else if((sz[i][0]==1&&sz[i][1]==0)||(sz[i][0]==2&&sz[i][1]==1)||(sz[i][0]==0&&sz[i][1]==2))
			b++;
	}
	if(a>b)
		printf("A");
	else if(a<b)
		printf("B");
	else 
		printf("Tie");
	return 0;
}
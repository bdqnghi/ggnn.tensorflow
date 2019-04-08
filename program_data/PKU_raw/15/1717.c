int main()
{
	int n,s=0,u;
	int image[100][100];
	scanf("%d",&n);
	for(int row=0;row<n;row++)
	{
		for(int col=0;col<n;col++)
		{
			scanf("%d",&(image[row][col]));
		}
	}
	for(int i=0;i<n;i++)
	{
		int k=0;
		for(int j=0;j<n;j++)
		{
			if(image[i][j]==0)
			{
//				printf("%d %d\n",row2,col2);
				k++;	
			}
		}
		if(k>0)
		{
			u=k;
			s++;
		}
		
	}
	int m=(u-2)*(s-2);
	printf("%d",m);
	return 0;
}
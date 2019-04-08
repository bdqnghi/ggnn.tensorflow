
int main()
{
	int sz[100][100];
    int row,col,n,x=0,k;
	scanf("%d",&n);
    for(row=0;row<n;row++)
	{
	    for(col=0;col<n;col++)
		{
		scanf("%d",&(sz[row][col]));
		}
	}
    
k=2;
	

	for(row=k;row<n-k;row++)
	{
	    for(col=k;col<n-k;col++)
		{
		     if(sz[row][col]!=0)
			 {
			 x++;
			 }
		}
	}

	 printf("%d\n",x);

	 return 0;
}


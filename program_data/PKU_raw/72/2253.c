int main()
{
	int m,n,s[A][A]={0},i,j;
	scanf ("%d%d",&m,&n);
    for (i=1;i<m+1;i++)
	{
		for (j=1;j<n+1;j++)
			scanf("%d",&s[i][j]);
	}

	
    for (i=1;i<m+1;i++)
	{
		
		for (j=1;j<n+1;j++)
		{
			if (s[i][j]>=s[i+1][j]&&s[i][j]>=s[i][j+1]&&s[i][j]>=s[i-1][j]&&s[i][j]>=s[i][j-1])
		    printf("%d %d\n",i-1,j-1);
		}
		

	}
    
	return 0;
}

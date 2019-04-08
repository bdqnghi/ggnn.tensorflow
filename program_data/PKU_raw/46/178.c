int main()
{
    int sz[100][100],m,n,row,col,e,p,k,q;

    scanf("%d%d\n",&row,&col);

	for (p=0;p<row;p++)
	{
        for (q=0;q<col;q++)
		{
			scanf ("%d",&sz[p][q]);
		}
	}

	if (col<row) e=col/2+1;
	else e=row/2+1;

	for (k=0;k<e;k++)
	{
		if (k==(col-k)) break;
		for (m=k,n=k;n<col-k;n++)
		{
			printf("%d\n",sz[m][n]);
		}
		if ((1+k)==(row-k)) break;
		for (n=col-1-k,m=1+k;m<row-k;m++)
		{
			printf("%d\n",sz[m][n]);
		}

		if ((col-2-k)==(k-1)) break;
		for (m=row-1-k,n=col-2-k;n>=k;n--)
		{ 
			printf("%d\n",sz[m][n]);
		}
		if ((row-2-k)==k) break;
		for (n=k,m=row-2-k;m>=1+k;m--)
		{
			if (m<0) break;
			printf("%d\n",sz[m][n]);
		}
	}

	return 0;
}
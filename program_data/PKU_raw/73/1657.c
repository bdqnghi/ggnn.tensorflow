int main()
{	int a[M][N], i, j, k, p, count=0; 
	
	for ( i = 0; i < M; i ++ )
	{
		for(j = 0; j < N; j++ )
		{
			scanf ( "%d", &a[i][j] );
		}
	}
	for ( i = 0; i < M; i ++ )	
	{
		p=0;
		for ( j = 0; j < N; j++ )
		{
			if(a[i][p]<a[i][j])
			{
				p=j;	
			}
		}
		for ( k=0; k<M; k++)
		{
			if(a[i][p]>a[k][p])
			{
				break;
			}
		}
		if(k==M)
		{
	      printf("%d %d %d\n",i+1,p+1,a[i][p]);
		count++;
		}
	}
	if(count==0)
	{
		printf("not found\n");
	}
	return 0;
}

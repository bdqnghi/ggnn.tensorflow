int main()
{
	int a[200][200];
	int i,j,m,k,counter=0,s,n,col,row;
	scanf("%d",&row);
	getchar();
	scanf("%d",&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(n=0;n<row;n++)
	{
		m=a[n][0];k=0;
		for(j=0;j<col;j++)
		{

			if(a[n][j]>m)	
             {
	             m=a[n][j]; 
				 k=j;
             }       
			
		}
		s=a[0][k];
		for(i=0;i<row;i++)
		{
			if(a[i][k]<s)
			{
				s=a[i][k];
			}
		}
		if(s==m)
		{
			printf("%d+%d\n",n,k);
			counter++;
		}
	}
	if(counter==0)
	{
		printf("No\n");
	}

	return 0;
}
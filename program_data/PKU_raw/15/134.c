int main()
{
	int n,i,j,num=0;
	int k[1000][1000];
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		  for (j=0;j<n;j++)
		  {
			  scanf("%d",&k[i][j]);
		  }
	}
	for (i=0;i<n;i++)
	{
		  for (j=0;j<n;j++)
		  {
			  if (k[i][j]==0)
			  {
				  while(k[i][j+1]==255)
				  {
					  j++;
					  num++;
				  }
				  
		          if (k[i][j+1]==0)
					  break;

			  }
		  }
	}
	printf("%d\n",num);
	return 0;
}
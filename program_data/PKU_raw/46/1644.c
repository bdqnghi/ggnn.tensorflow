int main()
{
	int x,y,m,n,i,j,k=0;
	cin>>x>>y;
	m=x;
	if (x>y)
		m=y;
	m=(m+1)/2;
	int max[x][y];
	for (i=0;i<x;i++)
		for (j=0;j<y;j++)
		{
			cin>>max[i][j];
		}

	for (n=0;n<m;n++)
	{	
		i=n;
		for (j=n;j<y-n;j++)
		 	{
            if (k==x*y)
               break;
             cout<<max[i][j]<<endl;
             k++;
            }
		i=y-n;
		j--;
		for (i=n+1;i<x-n;i++)
		    {
           if (k==x*y)
               break;
             cout<<max[i][j]<<endl;
             k++;
             }
		i--;
		for (j--;j>n-1;j--)
		    {
             if (k==x*y)
               break;
             cout<<max[i][j]<<endl;
             k++;
             }
		j++;
		for (i--;i>n;i--)
             {
             if (k==x*y)
               break;
             cout<<max[i][j]<<endl;
             k++;
             }
		
	
	}
	return 0;
}

int main()
{
	int k;
	cin >>k;
	for (int i=0;i<k;i++)
	{
		int m,n,board[100][100],sum=0;
		int (*p)[100];
		cin >>m >>n;
		for (int j=0;j<m;j++)
          for (int p=0;p<n;p++)
			cin >>board[j][p];
		for (int j=0;j<m;j++)
          for (int p=0;p<n;p++)
		  {
			  if (j==0||j==m-1||p==0||p==n-1)
				sum+=board[j][p];
		  }
		  cout <<sum <<endl;
	}
	
	return 0;
}
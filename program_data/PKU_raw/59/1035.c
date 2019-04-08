int A[110][110];
int day;int n;
void F(int x)
{
	
	if(x==day)
	{
		return ;
	}
    for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(A[i][j]>=0)
			{
				if(A[i-1][j]==-1||A[i-1][j]>A[i][j]+1)
				{
					A[i-1][j]=A[i][j]+1;
				}
				if(A[i+1][j]==-1||A[i+1][j]>A[i][j]+1)
				{
					A[i+1][j]=A[i][j]+1;
				}
				if(A[i][j+1]==-1||A[i][j+1]>A[i][j]+1)
				{
					A[i][j+1]=A[i][j]+1;
				}
				if(A[i][j-1]==-1||A[i][j-1]>A[i][j]+1)
				{
					A[i][j-1]=A[i][j]+1;
				}
			}
		}
	}
	F(x+1);
}
int main()
{
	
	cin>>n;
	char p;


	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
              cin>>p;
			  if(p=='@')
			  {
				  A[i][j]=0;
			  }
			  else if(p=='.')
			  {
				  A[i][j]=-1;
			  }
			  else
			  {
				  A[i][j]=-2;
			  }
			
		}
	}
	cin>>day;

	F(1);
	int num=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(A[i][j]<day&&A[i][j]>=0)
			{
				num++;
			}
		}
	}
	cout<<num;
	return 0;
}

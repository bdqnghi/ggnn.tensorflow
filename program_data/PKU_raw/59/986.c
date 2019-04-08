int A[200][200]={0};
int n;
void F(int i,int j)
{
	
		if(A[i-1][j]==-1)
		{
			A[i-1][j]=A[i][j]+1;
			F(i-1,j);
		}
		else if(A[i-1][j]>0&&A[i][j]+1<A[i-1][j])
		{
			
			A[i-1][j]=A[i][j]+1;
			F(i-1,j);
		}
		
		if(A[i+1][j]==-1)
		{
			A[i+1][j]=A[i][j]+1;
			F(i+1,j);
		}
		else if(A[i+1][j]>0&&A[i][j]+1<A[i+1][j])
		{
			
			A[i+1][j]=A[i][j]+1;
			F(i+1,j);
		}
		
		if(A[i][j-1]==-1)
		{
			A[i][j-1]=A[i][j]+1;
			F(i,j-1);
		}
		else if(A[i][j-1]>0&&A[i][j]+1<A[i][j-1])
		{
			
			A[i][j-1]=A[i][j]+1;
			F(i,j-1);
		}
		if(A[i][j+1]==-1)
		{
			A[i][j+1]=A[i][j]+1;
			  F(i,j+1);
		}
		else if(A[i][j+1]>0&&A[i][j]+1<A[i][j+1])
		{
			
			A[i][j+1]=A[i][j]+1;
			  F(i,j+1);
		}
	  

}
int main()
{
	for(int i=0;i<200;i++)
	{
		for(int j=0;j<=200;j++)
		{
			A[i][j]=-5;
		}
	}
	cin>>n;
	char p;
	for(int i=1;i<=n;i++)//???????????
	{
		for(int j=1;j<=n;j++)
		{
			cin>>p;if(p=='.')A[i][j]=-1;
			if(p=='@')A[i][j]=0;
			if(p=='#')A[i][j]=-2;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(A[i][j]>=0)
			{
				F(i,j);
			}
		}
	}
	int m;
	cin>>m;
	int num=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(A[i][j]>=0&&A[i][j]<m)
			{
				num++;
			}
		}
	}
	cout<<num;
	    return 0;
}



int sum=0;
int w=0;
int q[100][100];

void op(int n)
{
	if(n!=1)
	{
	int rm[n],cm[n];//rm[i] is the minimum of row[i][..]
	for(int i=0;i<n;i++)
	{
		rm[i]=q[i][0];
		cm[i]=q[0][i];// initialize
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(rm[i]>=q[i][j])
			{
				rm[i]=q[i][j];
			}
		}
	}// find the minimum of row

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			q[i][j]=q[i][j]-rm[i];//-minimum
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(cm[j]>=q[i][j])
			{
				cm[j]=q[i][j];// find the maximum of column
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			q[i][j]=q[i][j]-cm[j];//-minimum
		}
	}

	sum+=q[1][1];//add before elimination
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			q[i][j]=q[i][j+1];// shrinking
		}
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			q[i][j]=q[i+1][j];//shrinking
		}
	}
	op(n-1);
}

}


int main()
{
	int n;
	cin>>n;
	for(int s=1;s<=n;s++)
	{
		for(int a=0;a<n;a++)
		{
			for(int b=0;b<n;b++)
			{
				cin>>q[a][b];
			}
		}
		op(n);
		cout<<sum<<endl;
		sum=0;//initializing
	}
	return 0;
}

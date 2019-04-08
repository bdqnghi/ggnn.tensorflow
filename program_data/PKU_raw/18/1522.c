int juzhen[101][101][101]={0};
int guiling(int m,int n)
{
	int i,j,k=n,result=0,num[101][101]={0},min[101]={0};
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			num[i][j]=juzhen[m][i][j];
		}
	}
	while(k>1)
	{
		for(i=0;i<k;i++)
		{
			min[i]=10000;
			for(j=0;j<k;j++)
			{
				if(num[i][j]<=min[i])
					min[i]=num[i][j];
			}
		}
		for(i=0;i<k;i++)
		{
			for(j=0;j<k;j++)
			{
				num[i][j]=num[i][j]-min[i];
			}
		}
		for(j=0;j<k;j++)
		{
			min[j]=10000;
			for(i=0;i<k;i++)
			{
				if(num[i][j]<=min[j])
					min[j]=num[i][j];
			}
		}
		for(j=0;j<k;j++)
		{
			for(i=0;i<k;i++)
			{
				num[i][j]=num[i][j]-min[j];
			}
		}
		result=result+num[1][1];
		for(i=1;i<k-1;i++)
		{
			for(j=0;j<k;j++)
			{
				num[i][j]=num[i+1][j];
			}
		}
		for(j=1;j<k-1;j++)
		{
			for(i=0;i<k;i++)
			{
				num[i][j]=num[i][j+1];
			}
		}
		k--;
	}
	return result;
}
int main()
{
	int i,j,k,p;
	cin>>p;
	for(k=0;k<p;k++)
	{
		for(i=0;i<p;i++)
		{
			for(j=0;j<p;j++)
			{
				cin>>juzhen[k][i][j];
			}
		}
	}
	for(i=0;i<p;i++)
	{
		int answer=0;
		answer=guiling(i,p);
		cout<<answer<<endl;
	}
		return 0;
}








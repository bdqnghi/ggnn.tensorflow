int min2;
  int min1;
void diguihang(int i,int n,int a[300][300])//to work out the min of every line
{   if(i==-1)return;
	min1=a[i][0];//min1 = INT_MAX;
	for(int j=0;j<n;j++)
	{
		if(a[i][j]<min1)min1=a[i][j];
	}

		for(int v=0;v<n;v++)
		{
			a[i][v]=a[i][v]-min1;

		}
		diguihang(i-1,n,a);//a???????

}

void diguilie(int i,int n,int a[300][300])//the same as above to work out the min of
{
	if(i==-1)return;
	min2=a[0][i];//min2 = INT_MAX;
	for(int j=0;j<n;j++)
	{

		if(a[j][i]<min2)min2=a[j][i];
	}

		for(int v=0;v<n;v++)
		{
			a[v][i]=a[v][i]-min2;

		}
		diguilie(i-1,n,a);
	}

int change(int n,int sum,int a[300][300])//to shorten
{
	if (n==1)return sum;

		diguihang(n-1,n,a);
		diguilie(n-1,n,a);
		sum=sum+a[1][1];
	for(int j=1;j<n-1;j++)
	for(int i=0;i<n;i++)
	{
		a[j][i]=a[j+1][i];
	}
	for(int j=1;j<n-1;j++)
		for(int i=0;i<n-1;i++)
		{
			a[i][j]=a[i][j+1];
		}

      return  change(n-1,sum,a);
}
int main()
{
	int N;
	int a[300][300];
	cin>>N;
	for(int i=1;i<=N;i++){
		for(int j=0;j<N;j++)
			for(int y=0;y<N;y++)
			{
				cin>>a[j][y];
			}
		cout<<change(N,0,a)<<endl;
	}
	return 0;
}
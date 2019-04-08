int m;
int a[100][100];
int sum=0;

void d(int n)
{
	int min;

	for(int i=0;i<n;i++)
	{
		min=a[i][0];
		for(int j=0;j<n;j++)
		{
			if(min>a[i][j])
				min=a[i][j];
		}
		for(int j=0;j<n;j++)
			a[i][j]-=min;
	}
	for(int j=0;j<n;j++)
	{
		min=a[0][j];
		for(int i=0;i<n;i++)
		{
			if(min>a[i][j])
							min=a[i][j];
		}
		for(int i=0;i<n;i++)
		{
			a[i][j]-=min;
		}
	}
	sum+=a[1][1];
	for(int i=0;i<n;i++)
		for(int j=1;j<n-1;j++)
			a[i][j]=a[i][j+1];
	for(int j=0;j<n-1;j++)
		for(int i=1;i<n-1;i++)
			a[i][j]=a[i+1][j];
	if(n>2) d(n-1);


}
int main()
{

	cin>>m;
	int s[m+1],p=1;
	for(int t=1;t<=m;t++)
	{
		for(int i=0;i<m;i++)
    	  for(int j=0;j<m;j++)
    		  cin>>a[i][j];
		d(m);
		s[p++]=sum;
		sum=0;

	}
	for(int i=1;i<=m;i++)
		cout<<s[i]<<endl;
	return 0;
}

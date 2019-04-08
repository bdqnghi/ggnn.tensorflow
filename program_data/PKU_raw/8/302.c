int n,m;  //??????n,m?????????????
void reset1(int a[]);
void reset2(int b[]);
int main()
{
	int a[100],b[100],i;
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
		cin>>b[i];
	reset1(a);
	reset2(b);
	for(i=0;i<n;i++)
		cout<<a[i]<<' ';
	for(i=0;i<m-1;i++)
		cout<<b[i]<<' ';
	cout<<b[m-1];
	cin.get();cin.get();
	return 0;
}
void reset1(int a[])
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
		}
	}
}
void reset2(int b[])
{
	int i,j,t;
	for(i=0;i<m-1;i++)
	{
		for(j=0;j<m-1-i;j++)
		{
			if(b[j]>b[j+1])
			{
				t=b[j];b[j]=b[j+1];b[j+1]=t;
			}
		}
	}
}
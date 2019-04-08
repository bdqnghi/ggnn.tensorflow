int n,m;
void change(int a[]);
int main()
{
	int a[1000]={0},b[1000]={0};
	int i;
	int first=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
		cin>>b[i];
	change(a);
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	n=m;
	change(b);
	for(i=0;i<m;i++)
	{
		if(first==1)
			cout<<" "<<b[i];
		if(first==0)
		{
			cout<<b[i];
		first=1;
		}
	}
	cout<<endl;
	return 0;
}
void change(int a[])
{
	int t;
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
}

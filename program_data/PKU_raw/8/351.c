int m=0,n=0,a[100]={0},b[100]={0};
void got()
{
	cin>>m>>n;
	int i=0;
	for(i=0;i<m;i++)cin>>a[i];
	for(i=0;i<n;i++)cin>>b[i];
}
void f(int a[],int b[])
{
	int i=0,j=0,temp=0;
	for(i=0;i<m;i++)
		for(j=0;j<m-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
}
void plus(int a[],int b[])
{
	for(int i=0;i<n;i++)
	{
		a[m+i]=b[i];
	}
}
void shu(int a[])
{
	for(int i=0;i<m+n;i++)
	{
		if(i==m+n-1)cout<<a[i];
		else cout<<a[i]<<" ";
	}
}
int main()
{
	got();
	f(a,b);
	for(int i=0;i<m;i++)cout<<a[i]<<" ";
	for(int i=0;i<n;i++)
	{
		if(i!=n-1)cout<<b[i]<<" ";
		else cout<<b[i];}
	
	return 0;
}
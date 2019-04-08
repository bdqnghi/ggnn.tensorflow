int a[10000],b[10000],n,m;
void duru()
{
	int i,j;
	cin>>n>>m;
	for(i=0;i<n;i++) cin>>a[i];
	for(j=0;j<m;j++) cin>>b[j];
}
void sort()
{
	int t1,t2,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t1=a[j];
				a[j]=a[j+1];
				a[j+1]=t1;
			}
		}
	}
	for(i=0;i<m-1;i++)
	{
		for(j=0;j<m-1-i;j++)
		{
			if(b[j]>b[j+1])
			{
				t2=b[j];
				b[j]=b[j+1];
				b[j+1]=t2;
			}
		}
	}
}
void hebing()
{
	int i;
	for(i=n;i<n+m;i++)
	{
		a[i]=b[i-n];
	}
}
void put()
{
	int i;
	for(i=0;i<n+m-1;i++)
		cout<<a[i]<<' ';
	cout<<a[n+m-1]<<endl;
}
int main()
{
	duru();
	sort();
	hebing();
	put();
	
	return 0;
}




		


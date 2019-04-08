
int main()
{
	int n,i,j,t,k=0;
	int a[100],b[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(j=0;j<n-1;j++)
		for(i=0;i<n-1-j;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];a[i]=a[i+1];a[i+1]=t;
			}
		}
		int p=0;
			for(i=0;i<n;i++)
			{
				if(a[i]%2==1)
				{
					b[p]=a[i];
					p++;
					k++;
				}
			}
			for(p=0;p<k-1;p++)
				cout<<b[p]<<",";
			cout<<b[k-1]<<endl;
		return 0;
}


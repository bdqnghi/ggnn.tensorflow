int main()
{
	int a[200000]={0};
	int n=0,i=0,m=0,j=0,k=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	for(i=0;i<n;i++)
	{
		if(a[i]==m)
		{
			k+=1;
			for(j=i;j<n-k+1;j++)
				a[j]=a[j+1];
		}
		if(a[i]==m)
			i=i-1;
		    //k+=1;
	}
		for(i=0;i<n-k;i++)
			if(i==n-k-1)
			cout<<a[i]<<endl;
			else
				cout<<a[i]<<" ";
		return 0;
}


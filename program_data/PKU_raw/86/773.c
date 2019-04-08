int main()
{
	int n,k,i,x,a[100];
	cin>>n;
	for (k=0;k<n;k++)
	{
		cin>>x;
		if (x==0)
			cout<<"60"<<endl;
		else
			for (i=0;i<x;i++)
			{
				cin>>a[i];
				if (a[i-1]+3*i>60)
					continue;
				else if (a[i]+3*i>60)
					cout<<60-3*i<<endl;
				else if (a[i]+3*(i+1)>60)
					cout<<a[i]<<endl;
				else if (i==x-1)
					cout<<60-3*(i+1)<<endl;
			}
	}
	return 0;
}
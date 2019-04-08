int main()
{
	int n=0,i=0,j=0,a[60],m=0,l=0;
	cin>>n;
 	for(i=1;i<=n;i++)
	{
		cin>>m;
		if (m==0)
			cout<<"60"<<endl;
		else
		{
			for(j=1;j<=m;j++)
			{
				cin>>a[j];
				if(a[j]<(64-3*j))
					l=j;
			}
			if(a[l]<=(60-3*l))
				cout<<60-3*l<<endl;
			else if(a[l]>(60-3*l)&&a[l]<(64-3*l))
				cout<<a[l]<<endl;
		}
	}
	return 0;
}
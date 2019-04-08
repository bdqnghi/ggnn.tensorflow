int main()
{
	int n=0,k=0,a[1100]={0};
	cin>>n>>k;
	cin.get();
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int p=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==k)
			{
				p=1;
				cout<<"yes"<<endl;
				break;
			}
			
		}if(p==1)break;
	}
	if(p==0)cout<<"no"<<endl;

	return 0;
}
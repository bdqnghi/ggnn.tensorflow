int a[10000];
int b[10000];
int main()
{
	int n,p,q,i;
	cin>>n;
	for(i=0;i<n;i++)
		a[i]=0;
    	cin>>p>>q;
	while(p!=0||q!=0)
	{	
		a[p]++;b[q]++;
		cin>>p>>q;
	}
	for(i=0;i<n;i++)
		if(a[i]==0&&b[i]==n-1)
		{cout<<i<<endl;return 0;}
			cout<<"NOT FOUND"<<endl;
			return 0;
		
}
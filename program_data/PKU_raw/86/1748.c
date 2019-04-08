int main()
{
	int n,k,a[60],sum=0,p;
	cin>>n;
	for(int i=1;i<=n;i++)
	{memset(a,0,sizeof(a));
		cin>>k;
		if(k==0) cout<<"60"<<endl;
		else{
		for(int j=0;j<k;j++)
			cin>>a[j];
		for(int j=k-1;j>0;j--)
		{
			a[j]=a[j]-a[j-1];

		}
		for(p=0;p<k;p++)
		{if(sum+a[p]+3<=60)
			sum+=a[p]+3;
		else if(sum+a[p]<=60)
			{
			cout<<sum+a[p]-3*p<<endl;
			break;}
		else {
			cout<<60-3*p<<endl;
		break;}
		}
		if(p==k) cout<<60-3*p<<endl;
		sum=0;


		}

	}
	return 0;
}

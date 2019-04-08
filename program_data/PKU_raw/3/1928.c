int main()
{
	int n,k,a[1001],j,i,count=0;
	cin>>n>>k;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)//???a[i]????????
		{
			if(a[i]+a[j]==k)
				count=count+1;//??????
		}
		if(count==0)//?????
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
		return 0;
}

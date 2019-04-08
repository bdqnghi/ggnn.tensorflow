int main()
{
	int n,count=0,count1=0,i=-1,j=0;
	int a[1000000]={0},b[1000000]={0},x[10000]={0};
	cin>>n;
	do
	{
		i++;
		cin>>a[i]>>b[i];
		count++;
	}while(a[i]!=0||b[i]!=0);
	for(i=0;i<n;i++)
		for(j=0;j<count;j++)
			if(b[j]==i&&(a[j]!=0||b[j]!=0))
				x[i]++;
	for(i=0;i<n;i++)
		if(x[i]>=n-1)
		{
			cout<<i;
			count1++;
		}
	if(count1==0)
		cout<<"NOT FOUND"<<endl;
	return 0;
}

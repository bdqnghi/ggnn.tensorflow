int main()
{
	int n,i,j,k,times,a[500],max=1;
	char c[600],temp[10];
	cin>>n>>c;
	times=strlen(c)-n+1;
	for(i=0;i<times;i++)
	{
		for(j=0;j<n;j++)
			temp[j]=c[j+i];
		temp[j]=0;
		a[i]=1;
		for(j=i+1;c[j]!=0;j++)
		{
			int b=1;
			for(k=0;k<n;k++)
				if(temp[k]!=c[j+k])
					b=0;
			if(b==1)
				a[i]++;
		}
		if(a[i]>max)
			max=a[i];
	}
	if(max==1)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	cout<<max<<endl;
	for(i=0;i<times;i++)
		if(a[i]==max)
		{
			for(j=i;j<i+n;j++)
				cout<<c[j];
			cout<<endl;
		}
	return 0;
}
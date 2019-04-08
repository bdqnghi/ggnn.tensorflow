int main()
{
	int t,i,j,k,n,s=0;
	cin>>t;
	char a[100001];
	int b[1000]={0};
	for(i=0;i<t;i++)
	{
		cin>>a;
		n=strlen(a);
		for(int w=0;w<1000;w++)
			b[w]=0;
		s=0;
		for(j=0;j<n-1;j++)
		{
			for(k=0;k<n;k++)
			{
				if(a[k]==a[j])
					{
						b[j]++;
					}
				if(b[j]>1)
					break;
			}
			if(b[j]==1)
			{
				cout<<a[j]<<endl;s++;break;
			}
		}
		if(s==0)
			cout<<"no"<<endl;
	}
		return 0;
}
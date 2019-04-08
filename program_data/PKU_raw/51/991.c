int main()
{
	int i,j,k,n,chsum=0,l=0,t=0,maxnum=1,a[600]={0};
	char ch[600][10],ch1[700],temp[10];
	cin>>n>>ch1;
	l=strlen(ch1);
	for(k=0;k<=l-n;k++)
	{
		for(j=0;j<n;j++)
			temp[j]=ch1[k+j];
		t=0;
		for(i=1;i<=chsum;i++)
		{
			t=1;
			for(j=0;j<n;j++)
			{
				if(ch[i][j]!=temp[j])
				{
					t=0;
					break;
				}
			}
			if(t==1)
			{
				a[i]++;
				if(a[i]>maxnum)maxnum=a[i];
				break;
			}
		}
		if(t==0)
		{
			chsum++;
			for(i=0;i<n;i++)
				ch[chsum][i]=temp[i];
			a[chsum]++;
		}
	}
	if(maxnum>1)
	{
	cout<<maxnum<<endl;
	for(i=1;i<=chsum;i++)
		if(a[i]==maxnum)
		{
			for(j=0;j<n;j++)
			    cout<<ch[i][j];
			cout<<endl;
		}
	}
	else cout<<"NO";
	return 0;
}
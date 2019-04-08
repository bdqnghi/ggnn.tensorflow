
int main()
{
	int s[25],i,j,a[25],n,max;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
		s[i]=1;
		max=0;
		for (j=0;j<i;j++)
			if (a[j]>=a[i]&&s[j]>max) max=s[j];
		s[i]+=max;
	}
	max=0;
	for (i=0;i<n;i++)
		if (max<s[i]) max=s[i];
	cout<<max;
	return 0;
}


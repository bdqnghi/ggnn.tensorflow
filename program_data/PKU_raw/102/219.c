int main()
{
	int n;
	cin>>n;
	int i,j,s=0,t=0;
    float temp,m[10000],f[10000];
	char tempchar[10];
	for (i=0;i<n;i++)
	{
		cin>>tempchar;
		if (tempchar[0]=='m')
			cin>>m[s++];
		else cin>>f[t++];
	}

	for (i=0;i<s-1;i++)
		for (j=s-1;j>i;j--)
			if(m[j]<m[j-1])
			{
				temp=m[j];
				m[j]=m[j-1];
				m[j-1]=temp;
			}

	for (i=0;i<t-1;i++)
		for (j=t-1;j>i;j--)
			if(f[j]>f[j-1])
			{
				temp=f[j];
				f[j]=f[j-1];
				f[j-1]=temp;
			}
	for (i=0;i<s;i++)
	{
		printf("%.2f",m[i]);
		cout<<' ';
	}
	for (i=0;i<t-1;i++)
	{	printf("%.2f",f[i]);
		cout<<' ';
	}
	printf("%.2f",f[i]);
	return 0;
}


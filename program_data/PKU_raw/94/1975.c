int main()
{
	int N,s=0,x;
	cin>>N;
	int a[N],b[N];
	for(int i=0;i<N;i++)
		cin>>a[i];
	for(int i=0;i<N;i++)
		{
		if(a[i]%2)
			{
			s=s+1;
			b[s]=a[i];
			}


		}
	for(int i=1;i<s;i++)
		for(int j=1;j<=s-i;j++)
		{
			if(b[j]>b[j+1])
			{
				x=b[j];
				b[j]=b[j+1];
				b[j+1]=x;
			}
		}
	for(int i=1;i<=s;i++)
	{
		if(i-1)
			cout<<",";
		cout<<b[i];
	}

	return 0;
}

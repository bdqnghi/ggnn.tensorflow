int main()
{
	int N,s=0,p;//????
	int a[500],b[500];
	cin>>N;//?????????
	for(int i=0;i<N;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<N;j++)
	{
		if(a[j]%2!=0)
		{
			b[s]=a[j];
			s++;//13120005218zhy.zbklqx@gmail.com
		}
	}
	for(int m=0;m<s;m++)
	{
		for(int n=0;n<s-1-m;n++)
		{
			if (b[n]>b[n+1])
			{
				p=b[n+1];
			b[n+1]=b[n];
			b[n]=p;
			}
		}
	}
	for(int l=0;l<s;l++)
	{
		if(l==0)cout<<b[0];
		else cout<<","<<b[l];
	}
	return 0;
}


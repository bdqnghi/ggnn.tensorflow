int main()
{
	int i,j,n;
	char a0[110],b0[110];
	unsigned int a[110]={0},b[110]={0};
	for(cin>>n;n>=1;--n)
	{
		cin>>a0>>b0;
		for(i=0;i<=strlen(a0)-1;++i)
			a[i]=a0[i]-'0';
		for(i=0;i<=strlen(b0)-1;++i)
			b[i-strlen(b0)+strlen(a0)]=b0[i]-'0';
		for(i=strlen(a0)-1;i>=strlen(a0)-strlen(b0);--i)
		{
			if(a[i]>=b[i])
				a[i]=a[i]-b[i];
			else 
			{
				for(j=i-1;j>=0;--j)
				{
					if(a[j]!=0)
					{
						a[j]=a[j]-1;
						for(j=j+1;j<=i-1;++j)
						{
							a[j]=9;
						}
						a[i]=10+a[i]-b[i];
						break;
					}
				}
			}
		}
		for(i=0;i<=strlen(a0)-1;++i)
			cout<<a[i];
		cout<<endl;
	}
	return 0;
}

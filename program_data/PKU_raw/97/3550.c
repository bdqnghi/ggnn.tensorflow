int main()
{
	int n,b=0;
	cin>>n;
	for(int i=10;i>=0;--i)
		for(int j=1;j>=0;--j)
			for(int k=2;k>=0;--k)
				for(int l=2;l>=0;--l)
					for(int m=2;m>=0;--m)
						for(int a=5;a>=0;--a)
						{
							if((100*i+50*j+20*k+10*l+5*m+a==n)&&b==0)
							{cout<<i<<endl<<j<<endl<<k<<endl<<l<<endl<<m<<endl<<a<<endl;b=1;
							}
						}
		return 0;
}
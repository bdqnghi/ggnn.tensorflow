int main()
{
	int n;
	cin>>n;
	for(int k=1;k<=n;k++)
	{
		char a[101],b[101],c[101];
		//cin.getline(a,101);
		//cin.getline(b,101);
		cin>>a>>b;
		int lena,lenb;
		lena=strlen(a);
		lenb=strlen(b);
		for(int i=1;i<=lenb;i++)
		{
			if(a[lena-i]>=b[lenb-i])
			{
				c[lena-i]=a[lena-i]-b[lenb-i]+'0';
			}
			else
			{
				c[lena-i]=a[lena-i]+10-b[lenb-i]+'0';
				int t;
				t=lena-i;
				while(a[t-1]=='0')
				{
					a[t-1]='9';
					t--;
				}
				a[t-1]-=1;
			}
		}
		for(int i=0;i<lena-lenb;i++)
		{
			c[i]=a[i];
		}
		for(int i=0;i<lena;i++)
		{
			cout<<c[i];
		}
		cout<<endl;
	}
	return 0;
}
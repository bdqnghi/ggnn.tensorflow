int main()
{
	int n;
	char a[120],b[120];
	cin>>n;
	
	for(int q=1;q<=n;q++)
	{getchar();
		cin.getline(a,120);
		cin.getline(b,120);
		for(int i=0;i<strlen(b);i++)
			b[i]=96-b[i];
		for(int i=1;i<=strlen(b);i++)
		{
			a[strlen(a)-i]+=(b[strlen(b)-i]-48);
		}
		for(int i=strlen(a)-1;i>=0;i--)
		{
			if(a[i]<48)
			{
				a[i]+=10;
				a[i-1]--;
			}
		}
		for(int i=0;i<strlen(a);i++)
			cout<<(int)(a[i]-48);
		cout<<endl;
	}
	
	return 0;
}

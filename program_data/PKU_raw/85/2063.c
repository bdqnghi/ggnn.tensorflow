int main()
{
	int n,t;
	cin>>n;
	cin.get();
	while(n--)
	{
		char a[30];
		cin.getline(a,30);
		int str;
		str=strlen(a);
		
		for(int i=0;i<str;i++)
		{
			if((a[i]>='0'&&a[i]<='9')||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||a[i]=='_')
			{t=1;}
			else
			{ t=0;break;}
		}
		if(a[0]>='0'&&a[0]<='9')
				t=0;
			if(t)
				cout<<"yes"<<endl;
			else cout<<"no"<<endl;
	}
			return 0;
	}

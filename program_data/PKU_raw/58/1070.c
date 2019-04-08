int main()
{
	int n,i,l,j,t=1;
	char a[81];
	cin>>n;
	cin.get();
	while(cin.getline(a,81,'\n'))
	{
		l=strlen(a);
		if(!((a[0]=='_')||(a[0]<='z'&&a[0]>='a')||(a[0]<='Z'&&a[0]>='A')))
		{
			t=0;
			cout<<"0"<<endl;
			continue;
		}
		if((a[0]=='_')||(a[0]<='z'&&a[0]>='a')||(a[0]<='Z'&&a[0]>='A'))
		{
			t=1;
			for(j=0;j<l;j++)
			{
				if(!((a[j]=='_')||(a[j]<='z'&&a[j]>='a')||(a[j]<='Z'&&a[j]>='A')||(a[j]<='9'&&a[j]>='0')))
				{
					t=0;
					break;
				}
			}
			if(t==0) cout<<"0"<<endl;
			if(t==1) cout<<"1"<<endl;
		}
	}
	return 0;
}
int main()
{
	int n,i,l,s,j,k=1,p=1;
	cin>>n;
	cin.get();
	char c[90];
	for(i=0;i<n;i++)
	{
		k=1;p=1;
		cin.getline(c,90);
		l=strlen(c);
		s=c[0];
		if (!((s>=97&&s<=122)||(s<=90&&s>=65)||c[0]=='_'))
			cout<<"0"<<endl;
		else
		{
			for(j=1;j<l;j++)
			{
				if(!((c[j]>='0'&&c[j]<='9')||(c[j]>='a'&&c[j]<='z')||(c[j]>='A'&&c[j]<='Z')||c[j]=='_'))
				{
					cout<<"0"<<endl;
					p=0;break;
				}
			}
			if (p==1)
				cout<<"1"<<endl;
		}
	}
			return 0;
}

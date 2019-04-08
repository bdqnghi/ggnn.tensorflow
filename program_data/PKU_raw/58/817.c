int i,j;
int main()
{
	int n;
	char a[81];
	cin>>n;
	getchar();
	for (i=0;i<n;i++)
	{
		int l,p=0,q=0;
		cin.getline(a,81);
		l=strlen(a);
		if (a[0]=='_'||(a[0]>='A'&&a[0]<='Z')||(a[0]<=122&&a[0]>=97))
			p=1;
		else p=0;
		q=1;
		for (j=1;j<l;j++)
		{
			if (a[j]=='_'||(a[j]>='A'&&a[j]<='Z')||(a[j]<=122&&a[j]>=97)||(a[j]>='0'&&a[j]<='9'))
				continue;
			else 
			{
				q=0;
			}
		}
		if (p==0) cout<<"0"<<endl;
		if (p==1&&q==1) cout<<"1"<<endl;
		if (p==1&&q==0) cout<<"0"<<endl;
	}
	return 0;
}

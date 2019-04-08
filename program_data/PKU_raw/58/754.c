int judge(char a[100])
{
	int j,p=1,l;
    l=strlen(a);
	if(!((a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')||(a[0]=='_')))
		return 0;
	else
	{
		for(j=1;j<l;j++)
		{
			if (!((a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')||(a[j]=='_')||(a[j]>='0'&&a[j]<='9')))
			{
				p=0;
				return 0;
			}
		}
			if (p==1)
				return 1;
	}
}
int main()
{
	int n,i,r;
	char a[100];
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
		cin.getline(a,100);
		r=judge(a);
		cout<<r<<endl;
	}
	return 0;
}
		

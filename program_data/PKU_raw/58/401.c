int main()
{
	char a[81];
	int i,j,l,n,g;
	cin>>g;
	cin.get();
	for(j=0;j<g;j++)
	{
		cin.getline(a,81);
		for(n=0;a[n]!=0;n++);
		l=0;
		if(a[0]=='_'||(a[0]-'a'<26&&a[0]-'a'>=0)||(a[0]-'A'>=0&&a[0]-'A'<26))
		{
			l=1;
			for(i=1;i<n;i++)
			{
				if(a[i]=='_'||(a[i]-'a'<26&&a[i]-'a'>=0)||(a[i]-'0'>=0&&a[i]-'0'<10)||(a[i]-'A'>=0&&a[i]-'A'<26))
				{
					l=1;
				}
				else
				{
					l=0;
					break;
				}
			}
		}
		cout<<l<<endl;
	}
	return 0;
}
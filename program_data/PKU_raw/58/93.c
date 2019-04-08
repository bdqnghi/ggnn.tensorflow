int main()
{
	int i=0,n=0,j=0,b=0;
	char test[81];
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
		b=1;
		gets(test);
		if(!(test[0]=='_'||(test[0]>='A'&&test[0]<='Z')||(test[0]<='z'&&test[0]>='a')))
			b=0;
		for(j=1;j<strlen(test);j++)
		{
			if(!(test[j]=='_'||(test[j]>='A'&&test[j]<='Z')||(test[j]<='z'&&test[j]>='a')||(test[j]>='0'&&test[j]<='9')))
			{
				b=0;
			}
		}
		if(b==1)
			cout<<1<<endl;
		else
			cout<<0<<endl;
	}
	return 0;
}
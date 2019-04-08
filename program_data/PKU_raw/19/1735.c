int main()
{
	char s[100],a[100],b[100];
	int i=0,j=0,count=0;
	cin.get(s,100);
	cin>>a;
	cin>>b;
	for(i=0;i<=strlen(s)-strlen(a);i++)
	{
		count=0;
		for(j=i;j<i+strlen(a);j++)
		{
			if(s[j]==a[j-i])
				count++;
		}
		if(count==strlen(a)&&((s[i+strlen(a)]==' '||i+strlen(a)==strlen(s))&&(s[i-1]==' '||i==0)))
		{
			for(j=i;j<i+strlen(a);j++)
				s[j]='/';
		}
	}
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!='/')
			cout<<s[i];
		else
		{
			for(j=0;j<strlen(b);j++)
				cout<<b[j];
			do
			{
				i++;
			}while(s[i]=='/'&&(i+1==strlen(s) || s[i+1]=='/'));
		}
	}
	return 0;
}

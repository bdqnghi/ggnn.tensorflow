int main()
{
	int n;
	char str1[120];
	char str[120];
	cin>>n;

	for (int i=1;i<=n;i++)
	{
		memset(str,'\0',sizeof(str));
		cin>>str1;
		strcpy(str,str1);

		for ( int len=1;len<strlen(str);len++)
		{
			for ( int j=0;j<strlen(str)-len;j++)
			{
				int k=j+len;
				if ( str[j]=='(' && str[k]==')')
				{
					str[j]='0';
					str[k]='0';
				}
			}
		}

		for ( int i1=0;str[i1]!='\0';i1++)
		{
			if ( str[i1]=='(')
				str[i1]='$';
			else if ( str[i1]==')')
				str[i1]='?';
			else str[i1]=' ';
		}
		cout<<str1<<endl;
		cout<<str<<endl;
	}
	return 0;
}




int main()
{
	int n, i, len ;
	char str[1000];
	cin >> n;
	cin.get();
	while(n--)
	{
		cin.getline(str,1000);
		len = strlen(str);
		if(str[0]=='_'||(str[0]>='a'&&str[0]<='z')||(str[0]>='A'&&str[0]<='Z'))
		{
			if(len==1)
				cout << "1" << endl;
			else
			{
				for(i=1;i<len;i++)
				{
					if(str[i]=='_'||(str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]<='9'&&str[i]>='0'));
					else
						break;
				}
				if(i==len)
					cout << "1" << endl;
				else 
					cout << "0" << endl;
			}
		}
		else
			cout << "0" << endl;
		
	}
	return 0;
}
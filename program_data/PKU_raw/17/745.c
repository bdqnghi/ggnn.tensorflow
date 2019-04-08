int main()
{
	char str[110];
	int length,i=0;
    while(1)
	{
		cin.get(str,110,'\n');
		if(cin.get()==EOF)
			break;
		length=strlen(str);
		for(i=0;i<length;i++)
			cout<<str[i];
		cout<<endl;
		for(i=length-1;i>=0;i--)
		{
			if(str[i]!='('&&str[i]!=')')
				str[i]=' ';
			else if(str[i]=='(')
			{
				str[i]='$';
				for(int j=i;j<length;j++)
				{
					if(str[j]=='?')
					{
						str[i]=' ';
						str[j]=' ';
						break;
					}
				}
			}
			else if(str[i]==')')
				str[i]='?';
		}
		for(i=0;i<length;i++)
			cout<<str[i];
		cout<<endl;
	}
	return 0;
}




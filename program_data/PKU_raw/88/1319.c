int main()
{
	char str[35];
	int i;
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			cout<<str[i];
		}
		else
		{
			if(str[i+1]>='0'&&str[i+1]<='9')
			{
				cout<<endl;
			}
		}
	}
	if(str[strlen(str)-1]>='0'&&str[strlen(str)-1]<='9')
	{
		cout<<endl;
	}
	else
	{
		;
	}
	return 0;
}
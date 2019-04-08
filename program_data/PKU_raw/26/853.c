int main()
{
	char str[200];
	int i;
	for(i=0;i<200;i++)
	{
		*(str+i)='a';
	}
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(*(str+i)!=' ')
		{
			cout<<*(str+i);
		}
		else
		{
			if(*(str+i+1)!=' ')
			{
				cout<<*(str+i);
			}
		}
	}
	cout<<endl;
	return 0;
}
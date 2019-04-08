//******************
//???????****
int main()
{
	char str[201];
	gets(str);
	int len;
	len=strlen(str);
	
	for(int i=0;i<len;i++)
	{
		if(str[i]!=' ')
			cout<<str[i];
		else
		{
			if((str[i]==' ')&&(str[i+1]!=' '))
				cout<<str[i];
			if((str[i]==' ')&&(str[i+1]==' '))
				continue;
		}
	}
	return 0;
}

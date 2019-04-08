int main()
{
	char str[100];
	int i=0;
	int flag=0;
	gets(str);
	while(str[i]!=0)
	{
		if(str[i]==' ')
			if(flag==0)
			{
				flag=1;
				cout<<str[i];
			}
			else;
		else
		{
			flag=0;
		    cout<<str[i];
		}
		i++;
	}
	return 0;

}
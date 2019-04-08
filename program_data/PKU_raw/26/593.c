
int main()
{
	char str[100];
	int i=0,flag = 0;
	gets(str);
//	cout<<str;
	
	while(str[i]!='\0')
	{
		if(str[i]!=' ')
		{
			cout<<str[i];
			i++;
			continue;
		}
		if(str[i]==' '&&flag==0)
		{
			if(str[i+1]==' ')
				flag=1;
			cout<<str[i];
		}
		else
		{
			if(str[i]==' '&&flag==1)
			{
				if(str[i+1]!=' ')
					flag=0;
			}
		}
		i++;
	}
	cout<<endl;
	return 0;
}
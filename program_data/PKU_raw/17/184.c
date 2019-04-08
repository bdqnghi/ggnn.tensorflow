int main()
{
	char str[110];
	int i=0,j=0;
	while(cin.getline(str,110))
	{
		for(i=0;str[i]!='\0';i++) //???????
		{
			cout<<str[i];
		}
		cout<<endl;
		for(i=0;str[i]!='\0';++i) //????????????????????????????????????
		{
			if(str[i]==')')
			{
				for(j=i-1;j>=0;--j)
				{
					if(str[j]=='(')
					{
						str[i]=str[j]=' ';
						break;
					}
				}
			}
		}
		for(i=0;i<strlen(str);++i) //??????????????
		{
			if(str[i]=='(')
				cout<<"$";
			else if(str[i]==')')
				cout<<"?";
			else
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
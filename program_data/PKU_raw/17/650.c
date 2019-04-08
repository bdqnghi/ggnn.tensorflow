int main()
{
	char str[110]={0};
	while(true)
	{
		int i=0;
		while(true)
		{
			str[i]=getchar();
			if(str[i]=='\n')
				break;
			i++;
		}
		int n,j=0,biaoji=0;
		n=i-1;
		for(i=0;i<=n;i++)
			cout<<str[i];
		cout<<endl;
		for(i=0;i<=n;i++)
		{
			biaoji=0;
			if(str[i]==')')
			{
				for(j=i-1;j>=0;j--)//?????????
				{
					if(str[j]=='(')
					{
						biaoji=1;
						str[i]=' ';
						str[j]=' ';
						break;
					}
				}
				if(biaoji==0)
					str[i]='?';
			}
		}
		for(i=0;i<=n;i++)//??????????
		{
			if(str[i]=='(')
				str[i]='$';
			else if(str[i]==')')
				str[i]='?';
			else if(str[i]!='$'&&str[i]!='?')//???????
				str[i]=' ';
		}
		for(i=0;i<=n;i++)
			cout<<str[i];
		cout<<endl;
	}
		return 0;
}



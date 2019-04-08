int main()
{
	char a[110],b[110];
	int len,mark,sign=0,s=0;
	while(cin.getline(a,110,'\n'))
	{
		len=strlen(a);
		for(int i=0;i<=len-1;i++)
			b[i]=a[i];
		for(int j=1;j<=len;j++)
		{
			mark=0;
			sign=0;
			s=0;
			for(int i=0;i<len;i++)
			{
				if(a[i]=='(')
				{
					mark=i;
					s=1;
				}
			}
			if(mark==len-1)
			{
				a[mark]='$';
			}
			if(s!=0)
			{
			for(int i=mark+1;i<len;i++)
			{
				if(a[i]==')')
				{
					a[mark]='a';
					a[i]='a';
					sign=1;
					break;
				}
			}
			}
			if(s!=0)
			{
				if(sign==0)
					a[mark]='$';
			}
			sign=0;
			mark=0;
			s=0;
			for(int i=len-1;i>=0;i--)
			{
				if(a[i]==')')
				{
					mark=i;
					s=1;
				}
			}
			if(s!=0)
			{
			if(mark==0)
			{
				a[mark]='?';
			}
			}
			if(s!=0)
			{
			for(int i=mark-1;i>=0;i--)
			{
				if(a[i]=='(')
				{
					a[mark]='a';
					a[i]='a';
					sign=1;
					break;
				}
			}
			}
			if(s!=0)
			{
				if(sign==0)
					a[mark]='?';
			}
		}
		for(int i=0;i<len-1;i++)
			cout<<b[i];
		cout<<b[len-1]<<endl;
		for(int i=0;i<len-1;i++)
		{
			if(a[i]!='?'&&a[i]!='$')
				cout<<' ';
			else
				cout<<a[i];
		}
		if(a[len-1]!='?'&&a[len-1]!='$')
			cout<<' '<<endl;
		else
			cout<<a[len-1]<<endl;
		memset(a,'\0',sizeof(a));
		memset(b,'\0',sizeof(b));
		mark=0;
		sign=0;
		len=0;
	}
		return 0;
}
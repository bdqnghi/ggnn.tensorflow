int main()
{
	char a[101];
	int i,t,j,la,k,bb,pp;
	while(cin.getline(a,101,'\n'))
	{
		cout<<a<<endl;
		la=strlen(a);
		for(i=0;i<la;i++)
		{
			if(a[i]!='('&&a[i]!=')') a[i]=' ';
		}
		t=0;
		while(t==0)
		{
			t=1;
			for(i=la-1;i>=0;i--)
			{
				if(a[i]==')') break;
				if(a[i]=='(')
				{
					a[i]='$';
					break;
				}
			}
			for(i=0;i<la;i++)
			{
				if(a[i]==')')
				{
					a[i]='?';
					break;
				}
				if(a[i]=='(') 
				{
					break;
				}
			}
			for(i=0;i<la;i++)
			{
				if(a[i]=='(')
				{
					for(j=i+1;j<la;j++)
					{
						k=2;
						if(a[j]=='(')
						{
							k=0;
							break;
						}
						if(a[j]==')')
						{
							k=1;
							a[j]=' ';
							break;
						}
					}
					if(k==1) 
					{
						a[i]=' ';
					}
				}
			}
			for(i=0;i<la;i++)
			{
				if(a[i]=='('||a[i]==')')
				{
					t=0;
					break;
				}
			}
		}
		for(i=la-1;i>=0;i--)
		{
			if(a[i]!=' ')
			break;
		}
		bb=i;
		for(i=0;i<la;i++)
		{
			if(a[i]!=' ') break;
		}
		pp=i;
		for(j=pp;j<=bb;j++)
			cout<<a[j];
		cout<<endl;
	}
	return 0;
}
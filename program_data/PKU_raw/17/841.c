main()
{
	int n,e,x,i,t,j,k;
	char s[102];
	scanf("%d",&n);
	for(e=0;e<n;e++)
	{
		scanf("%s",s);
		printf("%s\n",s);
		x=strlen(s);
		for(i=0;i<x;i++)
		{
			if(s[i]!='('&&s[i]!=')')
			{
				s[i]=' ';
			}
		} 
		for(i=0;i<x;i++)
		{
			if(s[i]=='(')
			{
				for(j=i+1;j<x;j++)
				{
					if(s[j]==')')
					{
						t=0;
						for(k=i+1;k<j;k++)
						{
							if(s[k]!=' ')
							{
							t=1;
							break;
							}
						}
						if(t==0)
						{
							s[i]=' ';
							s[j]=' ';
							i=-1;
							break;
						}
					}
				}
			}
		}
		for(i=0;i<x;i++)
		{
			if(s[i]=='(')
			s[i]='$';
			if(s[i]==')')
			s[i]='?'; 
		}
		printf("%s\n",s); 
	}
}
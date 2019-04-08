int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		int j;
		int a[1000];
		char s[1000];
		scanf("%s",s);
		int l=strlen(s);
		printf("%s\n",s);
      
		for(j=0;j<l;j++)
			a[j]=0;
		for(j=l-1;j>=0;j--)
		{
			int t;
			if(s[j]=='(')
			{
				int f=0;
				for(t=j+1;t<l;t++)
				{
					if(s[t]==')'&&a[t]==0)
					{f=1;a[t]=1;a[j]=1;break;}
				}
				if(f==0)
				{
					s[j]='$';
				}
			}
		}
		for(j=0;j<l;j++)
		{
			if(s[j]==')'&&a[j]==0)
			{
				s[j]='?';
			}
		}
		for(j=0;j<l;j++)
		{
			if(s[j]!='?'&&s[j]!='$')
				s[j]=' ';
		}
		printf("%s\n",s);
	}
}
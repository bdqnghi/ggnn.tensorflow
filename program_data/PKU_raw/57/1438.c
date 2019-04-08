int main()
{
    int n,i,m,j;
	char s[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		m=strlen(s);
		for(j=0;j<=m;j++)
		{
			if(s[m-2]=='e'&&s[m-1]=='r')
			{
				s[m-2]='\0';
                s[m-1]='\0';
			}
			else if(s[m-2]=='l'&&s[m-1]=='y')
			{
				s[m-2]='\0';
                s[m-1]='\0';
			}
	    	else if(s[m-3]=='i'&&s[m-2]=='n'&&s[m-1]=='g')
			{
				s[m-3]='\0';
				s[m-2]='\0';
                s[m-1]='\0';
			}
		}
		printf("%s\n",s);
	}
	return 0;
}


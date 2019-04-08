int main()
{
	int n,k,i,j,flag=0;
	char s[M]={""};
	scanf("%s",s);
	while((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')||s[0]=='('||s[0]==')')
	{
		
			printf("%s\n",s);
			n=strlen(s);
			for(i=n-1;i>=0;i--)
			{
				if(s[i]=='(')
				{
					for(j=i+1;j<n;j++)
					{
						if(s[j]==')')
						{
							s[i]='a';
					        s[j]='a';
					        break;
						}
					}
				}
			}
			for(i=0;i<n;i++)
			{
				if(s[i]=='('||s[i]==')')
				{
					flag=1;
			        break;
				}
			}
			if(flag==0)
			{
				for(i=0;i<n;i++)
			    printf("%c",' ');
				printf("\n");
			}
			else
			{
				for(i=0;i<n;i++)
				{
					if(s[i]=='(')
						printf("%c",'$');
					else if(s[i]==')')
						printf("%c",'?');
					else
						printf("%c",' ');
				}
				printf("\n");
			}
			s[0]='\0';
		scanf("%s",s);
	}
	return 0;
}

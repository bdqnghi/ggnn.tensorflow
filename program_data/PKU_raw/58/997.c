void main()
{
	char s[81];
	int n,i,j,temp=0,k;
	scanf("%d",&n);getchar();
	for(i=0;i<n;i++)

	{
		gets(s);
		
		
		if(strlen(s)==1)
		{
			if(s[0]=='_'||(s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z'))
				printf("1\n");
			else
				printf("0\n");
		}
		if(strlen(s)>1)
		{
			if((s[0]=='_')||(s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z'))
			{
				for(j=1;j<strlen(s);j++)
				{
					if(s[j]<='9'&&s[j]>='0')temp++;
					if(s[j]=='_')temp++;
					if(s[j]>='a'&&s[j]<='z')temp++;
					if(s[j]>='A'&&s[j]<='Z')temp++;
						
					/*if(s[j+1]==' ')
						temp--;*/
				}
			
				if(temp==(strlen(s)-1))
					printf("1\n");
			}
			if(temp!=(strlen(s)-1))
				printf("0\n");
			temp=0;
		
		/*for(k=0;k<strlen(s);k++)
		{
			if(s[k]==' ')
				printf("0\n");
			else;
		}*/
		}
	}
}

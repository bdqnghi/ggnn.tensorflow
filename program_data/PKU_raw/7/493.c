int main()
{
	char s[256],a[256],b[256],ci[256][256];
	int ls,la,lb;
	gets(s);
	gets(a);
	gets(b);
	ls=strlen(s);
	la=strlen(a);
	lb=strlen(b);
	int i,j;
	for (i=0;i<=ls-la;i++)
	{
		for (j=0;j<la;j++)
		{
			ci[i][j]=s[i+j];
		}
			ci[i][la]='\0';
	}
	for (i=0;i<=ls-la;i++)
	{
		if (strcmp(ci[i],a)==0)
		{
			strcpy(ci[i],b);
			break;
		}
	}
	if(i!=ls-la+1)
	{
		for (j=0;j<i;j++)
		{
			printf("%c",ci[j][0]);
		}
		printf("%s",ci[i]);
		if(i!=ls-la)
		{
			for (j=i+la;j<ls-la;j++)
			{
				printf("%c",ci[j][0]);
			}
			printf("%s",ci[ls-la]);
		}
	}
	else
	{
		for (j=0;j<ls-la;j++)
		{
			printf("%c",ci[j][0]);
		}
		printf("%s",ci[ls-la]);
	}
	return 0;
}

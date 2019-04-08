
int main()
{
	char s[81],k[81];
	int x1,x2;
	int i;
	gets(s);
	gets(k);
	x1=strlen(s);
	x2=strlen(k);
	if (strlen(s)==strlen(k))
	{
		for(i=0;i<x1;i++)
		{
			if(s[i]>=65&&s[i]<=90)
				s[i]+=32;
			if(k[i]>=65&&k[i]<=90)
				k[i]+=32;
		}
		if(strcmp(s,k)==0)
			printf("=\n");
		else if(strcmp(s,k)<0)
			printf("<\n");
		else if(strcmp(s,k)>0)
			printf(">\n");
	}
	else
	{
		for(i=0;i<x1;i++)
		{
			if(s[i]>=65&&s[i]<=90)
				s[i]+=32;
		}
		for(i=0;i<x2;i++)
		{
			if(k[i]>=65&&k[i]<=90)
				k[i]+=32;
		}
		if(strcmp(s,k)==0)
			printf("=\n");
		else if(strcmp(s,k)<0)
			printf("<\n");
		else if(strcmp(s,k)>0)
			printf(">\n");
	}

	
	return 0;
}

int main()
{
	char s[100],a[30][10]={'\0'};
	int i,len,l=0,p=0;
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{if(s[i]!=' ')
	{a[l][p]=s[i];
	p++;
	}
    if((s[i+1]==' '&&s[i]!=' ')||s[i+1]=='\0')
	{l++;p=0;}
	}
	printf("%s",a[l-1]);
	for(i=l-2;i>=0;i--)
		printf(" %s",a[i]);
	return 0;
}


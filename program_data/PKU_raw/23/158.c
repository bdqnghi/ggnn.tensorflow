char str[100];
void print(int n)
{
	int i;
	for(i=n;;i++)
	{
	    if(str[i]==' '||str[i]=='\0') break;
		else printf("%c",str[i]);
	}
}
main()
{
	int i,len;
	gets(str);
	len=strlen(str);
	for(i=len-1;i>=0;i--)
		if(str[i]==' ') {print(i+1);printf(" ");}
	print(0);
}
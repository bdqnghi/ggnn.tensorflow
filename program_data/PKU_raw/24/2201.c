void main()
{
	char s[20000],a[100],maxa[100],mina[100];
	int len,min=1000,max=0,i,j;
	gets(s);
	for(i=0;;i++)
	{
		for(j=0;s[i]!=' '&&s[i]!=','&&s[i]!='\0';j++,i++)
		{
			a[j]=s[i];
		}
		a[j]='\0';
		len=strlen(a);
		if(len==0)
			continue;
		if(max<len)
		{
			max=len;
			strcpy(maxa,a);
		}
		if(min>len)
		{
			min=len;
			strcpy(mina,a);
		}
		if(s[i]=='\0')
			break;
	}
	printf("%s\n%s\n",maxa,mina);
}
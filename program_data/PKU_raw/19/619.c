void main()
{
	int i,j,p=0,k;
	char s[10000],ch[100],a[100],b[100];
	gets(s);
	gets(a);
	gets(b);
	for(i=0;s[i]!='\0';i++)
	{
	for(j=0;(s[i]!=' '&&s[i]!='\0');i++,j++)
			ch[j]=s[i];
	ch[j]='\0';
	if (strcmp(ch,a)==0) strcpy(ch,b);
	if (p>0) printf(" ");
	printf("%s",ch);
	for(k=0;k<=j;k++) ch[k]='\0';
	p++;
	}
}

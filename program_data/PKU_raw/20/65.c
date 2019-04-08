void main()
{
	int i,k,j;
	char str[10],substr[3],d={EOF};
	for (j=0;;j++)
	{
		if (scanf("%s %s",&str,&substr)==EOF) break;
	for (i=0;i<strlen(str);i++) if (str[i]>d) {k=i;d=str[i];}
	for (i=0;i<k+1;i++) printf("%c",str[i]);
	printf("%s",substr);
	for (;i<strlen(str)-1;i++) printf("%c",str[i]);
	printf("%c\n",str[i]);
	d=EOF;
	}
}

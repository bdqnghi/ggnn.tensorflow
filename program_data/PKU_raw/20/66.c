void main()
{
	int i,k,j;
	char str[10],substr[3],d={0};
	for (j=0;;j++)
	{
		d='\0';
		if (scanf("%s %s",&str,&substr)==EOF) break;
	for (i=0;i<strlen(str);i++) if (str[i]>d) {k=i;d=str[i];}
	for (i=0;i<k+1;i++) printf("%c",str[i]);
	printf("%s",substr);
	for (;i<strlen(str)-1;i++) printf("%c",str[i]);
	printf("%c\n",str[i]);
	}

}
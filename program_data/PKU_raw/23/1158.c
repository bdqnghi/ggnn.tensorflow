void main()
{
	char *p,str[110];
	int n,i;
	gets(str);
	n=strlen(str);
	for(i=n-1;i>=0;i--)
		*(str+i+1)=*(str+i);
	*str=*(str+n+1)=' ';
	for(i=n-1;i>=0;i--)
	if(*(str+i)==' ')
	{for(p=str+i+1;*p!=' ';p++)
		 printf("%c",*p);
	if(i!=0) printf(" ");
	}
}
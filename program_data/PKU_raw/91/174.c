int main()
{
	char *p;
	char c;
	int i;
	p=(char *)malloc(100*sizeof(char));
	gets(p);
	c=*p;
	for (i=0;i<(strlen(p)-1);i++)
		*(p+i)=*(p+i)+*(p+i+1);
	*(p+strlen(p)-1)=*(p+strlen(p)-1)+c;
	for (i=0;i<strlen(p);i++)
		printf("%c",*(p+i));
	return 0;
}
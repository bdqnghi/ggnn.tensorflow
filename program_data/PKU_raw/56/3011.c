
void main()
{
	char *str;
	str=(char*)malloc(5*sizeof(char));
	char*p;
	p=str;
	gets(str);
	for(p=str+strlen(str)-1;p>=str;p--)
		printf("%c",*p);

}
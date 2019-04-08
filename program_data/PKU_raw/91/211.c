
void main()
{
	int len;
	char *str,*p,*q;
	str=(char *)calloc(150,sizeof(int));
	gets(str);
	len=strlen(str);
	for(p=str;p-str<len-1;p++)
		printf("%c",*p+*(p+1));
	printf("%c\n",*p+*str);
}


	
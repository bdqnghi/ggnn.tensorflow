void main()
{
	char str[100],str1[100];
	int i,len;
	char *p,*p1;
	gets(str);
	len=strlen(str);
	p=str;
	p1=str1;
	for (i=0;i<len-1;i++)
		*(p1+i)=(char)((int)*(p+i)+(int)*(p+i+1));
	*(p1+len-1)=(char)((int)*(p+len-1)+(int)*(p+0));
	for(i=0;i<len;i++)
		printf("%c",*(p1+i));
}
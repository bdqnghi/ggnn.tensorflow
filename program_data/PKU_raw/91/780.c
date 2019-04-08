void main()
{
	char a[102];
	char * p;
	char t;
	gets(a);
    t=a[0];
	for(p=a+1;*p!='\0';p++)
		*(p-1)=*(p-1)+*p;
	*(p-1)=*(p-1)+t;
	for(p=a;*p!='\0';p++)
		printf("%c",*p);

}

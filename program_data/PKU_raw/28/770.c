void main()
{
	char *c=(char *)malloc(1000*sizeof(char)),*p=c;
	int i=0,flag=1;
	gets(c);
	for(p=c;*p!='\0';p++)
	{
		if(*p==' '&&flag==0)
			i=0;
		else if(*p==' '&&flag==1)
			printf("%d,",i),flag=0,i=0;
		else if(*p!=' ')
			i++,flag=1;
	}
	if(*p=='\0'&&flag==1)
		printf("%d",i);
}

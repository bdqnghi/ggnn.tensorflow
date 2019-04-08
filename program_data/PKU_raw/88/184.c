void main()
{
	char *p;
	char a[30];
	p=(char*)malloc(30*sizeof(char));
	gets(a);
	p=a;
	for(p=a;*p!='\0';p++)
		if(*p>=48&&*p<=57)
		{
			printf("%c",*p);
			if(*(p+1)<48||*(p+1)>57)
			{
				printf("\n");
			}
		}
}
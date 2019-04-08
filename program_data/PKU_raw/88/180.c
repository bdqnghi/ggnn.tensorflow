int main()
{
	char *p;
	int i;
	p=(char *)malloc(30*sizeof(char));
	gets(p);
	for (i=0;i<strlen(p);i++)
	{
		if (*(p+i)>=48&&*(p+i)<=57)
			printf("%c",*(p+i));
		else if ((!(*(p+i)>=48&&*(p+i)<=57))&&(*(p+i+1)>=48&&*(p+i+1)<=57))
			printf("\n");
	}
	return 0;
}
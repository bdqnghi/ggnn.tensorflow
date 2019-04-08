void main()
{
	int i;
	char *a;
	a=(char*)calloc(10000,sizeof(char));
	gets(a);
	for(i=0;*(a+i)!='\0';i++)
	{
		if(*(a+i+1)=='\0')
			printf("%c",*(a+i)+*(a+0));
		else
			printf("%c",*(a+i)+*(a+i+1));
	}
}

int main()
{
	char*p;
	p=(char*)malloc(1000*sizeof(char));
	int i,k=0;
	gets(p);
	for(i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)!=' ')
		{
			printf("%c",*(p+i));
			k=1;
		}
		if((k==1)&&(*(p+i)==' '))
		{
			printf(" ");
			k=0;
		}
	}
}
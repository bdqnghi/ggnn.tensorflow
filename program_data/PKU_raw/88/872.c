int main()
{
	char *p,*q;
	int a=0;
	p=(char*)malloc(30*sizeof(char));
	q=p;
	gets(p);
	while(*q!='\0')
	{
		if(*q<='9'&&*q>='0')
		{
			printf("%c",*q);
			a=0;
		}
		if((*q>'9'||*q<'0')&&a==0)
		{
			printf("\n");
			a++;
		}
		q++;
	}
}
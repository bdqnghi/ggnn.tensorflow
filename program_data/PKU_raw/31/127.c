
void main()
{
	char *juzi[1000];
	char **p;

	p=juzi;
	*p=(char *)malloc(100*sizeof(char));
	gets(*p);
	while(strcmp(*p,"end")!=0)
	{
		p++;
		*p=(char *)malloc(100*sizeof(char));
		gets(*p);
	
	}
    p--;
	for(;p>=juzi;p--)
		puts(*p);

}
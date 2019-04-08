void main()
{
	char *c;
	int k=1;
	c=(char*)malloc(30*sizeof(char));
	gets(c);
	for(;*c!='\0';c++)
	{
		if((*c<48)||(*c>57))
		   k=0;
        else if(k==0)
        {
        	printf("\n%c",*c);
        	k=1;
        }
        else
           printf("%c",*c);
	}
}
main()
{
	char c,d;
	while((c=getchar())!='\n')
	{
		if(c!=' '||d!=' ') putchar(c);
	    d=c;
	}
	printf("\n");
	return 0;
}
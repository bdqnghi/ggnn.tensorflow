main()
{
	char *p;
	int k=0;
	p=(char*)malloc(300*sizeof(char));
	gets(p);
	for(;*p!='\0';p++)
	{
		if(*p==' '&&k!=0)
			continue;
		if(*p==' '&&k==0)
			k++;
		if(*p!=' ')
			k=0;
		putchar(*p);
	}
}


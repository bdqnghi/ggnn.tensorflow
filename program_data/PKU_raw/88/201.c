main()
{
	char *a,*p;
	a=(char *)malloc(30*sizeof(char));
	gets(a);
	for(p=a;*p!='\0';p++)
		if(*p<='9'&&*p>='0') printf("%c",*p);
		else if(*(p-1)<='9'&&*(p-1)>='0') printf("\n");
}



main()
{
	int n,i,j,k,len;
	char a,b;
	char *name,*final;
	name=(char*)malloc(101*sizeof(char));
	final=(char*)malloc(101*sizeof(char));
	gets(name);
	len=strlen(name);
	for(i=0;i<len-1;i++)
	{
		a=*(name+i);
		b=*(name+i+1);
		*(final+i)=a+b;
	}
	a=*(name+i);
	b=*(name);
	*(final+i)=a+b;
	*(final+len)='\0';
	printf("%s\n",final);
}
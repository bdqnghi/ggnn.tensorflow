void main()
{
	char *str,*substr,*newstr;
	int i,j,p,q,a,b=0;
	str=(char *)malloc(11*sizeof(char));
	substr=(char *)malloc(4*sizeof(char));
	newstr=(char *)calloc(30,sizeof(char));
	while(scanf("%s %s",str,substr)!=EOF)
	{
	p=strlen(str);
	q=strlen(substr);
	a=*str;
	for(i=1;i<p;i++)
		if(*(str+i)>a)
		{
			a=*(str+i);
			b=i;
		}

	for(i=0;i<=b;i++)
		*(newstr+i)=*(str+i);
	for(i=b+1,j=0;j<q;i++,j++)
		*(newstr+i)=*(substr+j);
	for(i=b+q+1,j=b+1;j<p;i++,j++)
		*(newstr+i)=*(str+j);

	for(i=0;i<p+q;i++)
		printf("%c",*(newstr+i));
	printf("\n");
	}
}
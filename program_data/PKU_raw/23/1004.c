void main()
{
	char *p,*head,*q;
	int i,j,n;
	p=(char *)malloc(100*sizeof(char));
	gets(p);
	n=strlen(p);
//	printf("%d",n);
	for(i=n-1;i>=0;i--)
	{
		if(*(p+i)!=' ') continue;
		if(*(p+i)==' ')
		{
			for(j=i+1;*(p+j)!=' ' && *(p+j)!='\0';j++)
				printf("%c",*(p+j));
		}
		printf(" ");
	}
	for(i=0;*(p+i)!=' ' && *(p+i)!='\0';i++)
		printf("%c",*(p+i));
}
void main()
{
	char a[100],*p;
	int n,m=0,i,j;
	gets(a);
	p=a;
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
		if(*(p+i)!=' ') m=m+1;
		if(*(p+i)==' ')
		{
			for(j=i+1;j<i+m+1;j++)
				printf("%c",*(p+j));
			printf(" ");
			m=0;
		}
	}
	for(i=0;*(p+i)!=' '&& *(p+i)!='\0';i++)
		printf("%c",*(p+i));
}

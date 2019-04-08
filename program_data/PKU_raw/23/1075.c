void main()
{
	int i,j,n;
	char str[100][100],(*p)[100],temp[100];
	p=str;
	for(i=0;(scanf("%s",*(p+i)))!=EOF;i++)
		;
	n=i;
	
	for(i=0;i<(n/2);i++)
	{strcpy(temp,*(p+i));strcpy(*(p+i),*(p+n-1-i));strcpy(*(p+n-1-i),temp);}
	for(i=0;i<(n-1);i++)
	    printf("%s ",*(p+i));
    printf("%s",*(p+n-1));
	
}

void main()
{
	char *p[100],str[100][100],c;
	int i,j;
	for(i=0;i<100;i++)
		*(p+i)=*(str+i);
	for(i=0;;i++)
	{
		scanf("%s",*(p+i));
	    if(c=getchar()=='\n')break;
	}
	
	printf("%s",*(p+i));
	for(j=i-1;j>=0;j--)
	    printf(" %s",*(p+j));

	


}
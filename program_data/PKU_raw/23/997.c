void main()
{
	char a[100],*p,b[100][100]={'\0'},(*q)[100];
	int i=0,j=0,n;
	gets(a);
	q=b;
	for(p=a;*p!='\0';p++)
	{
		if(*p!=' ')
		{
			*(*(q+i)+j)=*p;
			j++;
		}
		else
		{
			i++;
			j=0;
		}
	}
	n=i;
	for(i=n;i>0;i--)
	{
		for(j=0;*(*(q+i)+j)!='\0';j++)
		    printf("%c",*(*(q+i)+j));
        printf(" ");
	}
	for(j=0;*(*q+j)!='\0';j++)
	    printf("%c",*(*q+j));
	printf("\n");
}
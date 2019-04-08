int main()
{
	char a[80]={'\0'},b[80]={'\0'},A[80]={0},B[80]={0};
	int i,j;
	gets(a);
	gets(b);
	for(i=0;i<80;i++)
	{
		if(a[i]>=65&&a[i]<=90)
			A[i]=a[i]+32;
		else A[i]=a[i];
		if(b[i]>=65&&b[i]<=90)
			B[i]=b[i]+32;
		else B[i]=b[i];
	}
	if(strcmp(A,B)>0)
	    printf(">");
	else if(strcmp(A,B)<0)
	    printf("<");
	else printf("=");
	return 0;
}
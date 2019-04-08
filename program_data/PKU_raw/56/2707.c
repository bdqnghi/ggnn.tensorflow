void main()
{
	char a[10]={0};
    int n,i;
	
	gets(a);
	
	n=0;

	for(i=0;a[i]!='\0';i=i+1)
		n=n+1;

	for(i=n-1;i>=0;i=i-1)
		printf("%c",a[i]);
}
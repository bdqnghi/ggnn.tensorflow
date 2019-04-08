void main()
{
	int i,n,l[400];
	char a[400][40];
	for(i=0;(scanf("%s",a[i]))!=EOF;i++)
		;
	n=i;
	for(i=0;i<n;i++)
		l[i]=strlen(a[i]);
	for(i=0;i<n;i++)
		if(i==0)
			printf("%d",l[i]);
		else
			printf(",%d",l[i]);


}
void main()
{
	char *a[100],c='\n';int i;
	for(i=0;;)
	{
		a[i]=(char *)malloc(100*sizeof(char));
		scanf("%s",a[i]);i++;
		if(c==getchar()) break;
	}
	for(i=i-1;i>=0;i--)
	if(i!=0) printf("%s ",a[i]);
	else printf("%s",a
		[i]);
}
void main()
{
	char *a[30];int i;
	for(i=0;;i++)
	{
		a[i]=(char *)calloc(1,20*sizeof(char));
		scanf("%s",a[i]);
		if(getchar()=='\n') break;
	}
	for(;i>=0;i--)
		if(i==0) printf("%s",a[i]);
		else printf("%s ",a[i]);
}
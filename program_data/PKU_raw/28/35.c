void main()
{
	char a[200][40];
	int len[200],i=0,n;
    leap:scanf("%s",a[i]);
	len[i]=strlen(a[i]);
	i++;
	if(getchar()==' ') goto leap;
	n=i;
	for(i=0;i<n-1;i++) printf("%d,",len[i]);
	printf("%d",len[n-1]);
}
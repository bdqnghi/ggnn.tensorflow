void main()
{
	char str[300][1000];
	int i,j,k,a[10000];
	for(i=0;;i++)
	{
        scanf("%s",str[i]);
        if(getchar()=='\n') break;
    }
	for(j=0;j<=i;j++)
	{
		a[j]=strlen(str[j]);
	}
	for(k=0;k<=i;k++)
	{
        if(k==i) printf("%d\n",a[k]);
		else printf("%d,",a[k]);
	}
}
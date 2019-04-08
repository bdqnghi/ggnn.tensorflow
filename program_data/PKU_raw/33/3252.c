int main()
{
    int n,i,j;
    char a[256];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",a);
        for(j=0;a[j]!='\0';j++)
	{
	    if(a[j]=='C') printf("G");
	    else if(a[j]=='G') printf("C");
	    else if(a[j]=='T') printf("A");
	    else printf("T");
	}
    printf("\n");
    }
    return 0;
}
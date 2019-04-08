void main()
{
	char a[100],b[100];
    int  c[200]={0},d[200]={0},j,i,k=0,n,m;
    scanf("%s%s",a,b);
    n=strlen(a);m=strlen(b);
    if(m!=n)printf("NO");
	else
	{
		for(i=0;i<n;i++)
		{
			c[a[i]]++;d[b[i]]++;

		}
	    for(i=0;i<200;i++)if(c[i]==d[i])k++;
	    if(k==200)printf("YES");
	    else printf("NO");
	
	
	
	}
}
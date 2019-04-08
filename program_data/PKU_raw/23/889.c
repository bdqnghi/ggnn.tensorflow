void main()
{
    int i,j=1,n,b[100],m=0;
	char a[100];
	gets (a);
	n=strlen(a)-1;
	b[0]=n;
	for (i=0;i<=n;i++) if (a[i]==' ') m=m+1;
    if (m>0)
	{
		for (i=n;i>=0;i--)
		if(a[i]==' ') {b[j]=i;j=j+1;}
    for (i=b[1]+1;i<=b[0];i++) printf("%c",a[i]);printf(" ");
	j=1;
	while (j<m)
	{
		for (i=b[j+1]+1;i<=b[j];i++) printf("%c",a[i]);
		j=j+1;
	}
	for (i=0;i<=b[m]-1;i++) printf("%c",a[i]);
	}
    else if(m==0) puts(a);
}
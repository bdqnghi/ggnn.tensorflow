void main()
{
    char a[14], b[14],t;int i,n,j,m,k;
	
	while (gets(a)!='\0')
	{
		strcpy (b,a);
		n=strlen(a);
		for (i=0;i<n;i++) if(a[i]==' ') {m=i;break;}
		for (i=0;i<m-1;i++)
			for (j=0;j<m-1-i;j++)
			if (b[j]<b[j+1]) {t=b[j];b[j]=b[j+1];b[j+1]=t;}
		for (i=0;i<m-1;i++) if (a[i]==b[0]) {k=i;break;}
		for (i=0;i<=k;i++) printf("%c",a[i]);
		for (i=n-3;i<n;i++) printf("%c",a[i]);
		for (i=k+1;i<=m-1;i++) printf("%c",a[i]);printf("\n");
	    
	}
}
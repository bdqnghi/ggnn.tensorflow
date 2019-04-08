void main()
{
	int i,j,n,m;
	char a[100],b[100];
	scanf("%s",a);
	scanf("%s",b);
	n=strlen(a);
         m=strlen(b);
         if(m==n)
         {
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(a[i]==b[j])break;
		if(j==n)break;
		else b[j]='&';
	}
	if(i<n)printf("%s\n","NO");
	else printf("%s\n","YES");
         }
         else printf("%s\n","NO");
}

void main()
{
	char a[100],b[100],c[100],d[100],t;
	int i,j,k,n,m,l;
	scanf("%s",a);
	scanf("%s",b);
	n=strlen(a);
	m=strlen(b);
	for(i=0;i<n;i++)
	for(j=0;j<n-i;j++)
		if(a[j]<a[j+1])
		{
             t=a[j];
			 a[j]=a[j+1];
			 a[j+1]=t;
		}
	for(i=0;i<n;i++)
	for(j=0;j<n-i;j++)
		if(b[j]<b[j+1])
		{
             t=b[j];
			 b[j]=b[j+1];
			 b[j+1]=t;
		}
	if(strcmp(a,b)==0)
		printf("YES");
	else printf("NO");
}
void main()
{
	char a[80],b[80],i;
	int m,n;
	gets(a);
	m=strlen(a);
	for(i=0;i<m;i++)
		if(a[i]>=65 && a[i]<=90) a[i]=a[i]+32;
	gets(b);
	n=strlen(b);
		for(i=0;i<n;i++)
			if(b[i]>=65 && b[i]<=90) b[i]=b[i]+32;
	if(strcmp(a,b)>0) printf(">");
	if(strcmp(a,b)<0) printf("<");
	if(strcmp(a,b)==0) printf("=");

}
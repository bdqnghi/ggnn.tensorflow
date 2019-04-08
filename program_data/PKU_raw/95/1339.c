main()
{
    int i,la,lb;
	char a[80],b[80];
	gets(a);
	gets(b);
	la=strlen(a);
	lb=strlen(b);
	for(i=0;i<la;i++) if(a[i]>=65&&a[i]<=90) a[i]+=32;
    for(i=0;i<lb;i++) if(b[i]>=65&&b[i]<=90) b[i]+=32;
	i=strcmp(a,b);
	if(i>0) printf(">\n");
	else if(i==0) printf("=\n");
	else printf("<\n");
	return 0;
}
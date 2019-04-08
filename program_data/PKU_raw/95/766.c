void main()
{
	char s1[10000],s2[10000];
	int i,n;
	gets(s1);
	gets(s2);
	n=strlen(s1);
	for (i=0;i<n;i++)
		s1[i]=(s1[i]>='A'&&s1[i]<='Z')?(s1[i]+32):s1[i];
	n=strlen(s2);
		for (i=0;i<n;i++)
		s2[i]=(s2[i]>='A'&&s2[i]<='Z')?(s2[i]+32):s2[i];
 if (strcmp(s1,s2)>0) printf(">");
 else if (strcmp(s1,s2)<0) printf("<");
 else printf("=");
}

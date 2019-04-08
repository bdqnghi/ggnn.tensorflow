void main()
{
	int a,n,m,i;
	char s1[80],s2[80];
	gets(s1);
	gets(s2);
	n=strlen(s1);
	m=strlen(s2);
	for(i=0;i<n;i++)
	{
		if(s1[i]>='a'&&s1[i]<='z') s1[i]=s1[i]-32;
	}
	for(i=0;i<m;i++)
	{
		if(s2[i]>='a'&&s2[i]<='z') s2[i]=s2[i]-32;
	}
	a=strcmp(s1,s2);
	if(a==0) printf("=");
	else if(a>0) printf(">");
	else if(a<0) printf("<");
}
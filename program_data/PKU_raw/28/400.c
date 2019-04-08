void main()
{
	char s[1000];int i,n,j,s1[1000];
	gets(s);
	for(i=0,j=0;i<strlen(s);i++)
	{
		if(s[i]==' ') {s1[j]=i;j++;}
	}
	if(j!=0)
	{
	printf("%d,",s1[0]);
	for(i=0;i<j-1;i++)
	{
		if((s1[i+1]-s1[i]-1)==0) continue;
		else printf("%d,",s1[i+1]-s1[i]-1);
	}
	printf("%d",strlen(s)-s1[j-1]-1);
	}
	else printf("%d",strlen(s));

}

void main()
{
	char s1[102],s2[102];
	int p,i,j,m,n,len1,t,len2;

	scanf("%d\n",&m);
	for (t=1;t<=m;t++)
	{
	gets(s1);
	gets(s2);
	if (t<m) getchar();
	len1=strlen(s1);
	len2=strlen(s2);
    p=0;
	for (i=len2-1;i>=0;i--)
	{
		if (s1[len1+i-len2]-p<s2[i]) { s1[len1+i-len2]=s1[len1+i-len2]+10-p-s2[i]+48;p=1;}
		else {s1[len1+i-len2]=s1[len1+i-len2]-p-s2[i]+48;p=0;}
	}
	i=1;
	while (p==1)
	{
		if (s1[len1-i-len2]=='0') {s1[len1-i-len2]+=9;i++;}
		else {s1[len1-i-len2]=s1[len1-i-len2]-1;p=0;}
	}
	i=0;
	p=1;
	while (p==1)
	{
		if (s1[i]=='0') i++;
		else p=0;
	}
	for (j=i;j<=len1-1;j++)
    	putchar(s1[j]);
	putchar('\n');
    }	
	
	
}
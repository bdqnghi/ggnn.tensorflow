void main()
{
    char a[100],b[100];
	int da[2][26]={0},xiao[2][26]={0};
	scanf("%s %s",a,b);
	int i,l1,l2;
	l1=strlen(a);
	l2=strlen(b);
	for(i=0;i<l1;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
			xiao[0][a[i]-'a']++;
		else da[0][a[i]-'A']++;
	}
	for(i=0;i<l2;i++)
	{
		if(b[i]>='a'&&b[i]<='z')
			xiao[1][b[i]-'a']++;
		else da[1][b[i]-'A']++;
	}
	int flag=0;
	for(i=0;i<26;i++)
		if(da[0][i]!=da[1][i])
			flag=1;
	for(i=0;i<26;i++)
		if(xiao[0][i]!=xiao[1][i])
			flag=1;
	if(flag==0)
		printf("YES");
	else printf("NO");
}

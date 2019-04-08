int main()
{
	int n,i,j,a=0,m;
	char s[20];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",s);
		m=strlen(s);
        a=0;
	for(j=0;j<m;j++)
	{
  		if((j==0)&&(s[0]>='0')&&(s[0]<='9')) {a=1;break;}
		if((s[j]=='_')||((s[j]<='z')&&(s[j]>='a'))||((s[j]<='Z')&&(s[j]>='A'))||((s[j]<='9')&&(s[j]>='0')))
		a=0;
	else {a=1;break;}
	}
	if(a==0)
		printf("yes\n");
	if(a==1) 
		printf("no\n");
    }
	return 0;
}
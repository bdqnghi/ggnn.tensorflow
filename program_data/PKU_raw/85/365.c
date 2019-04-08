void main()
{
	int panduan(char c[][21],int n,int l);
    int n,i,len[30];
	char str[30][21];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%s",str[i]);
	for(i=0;i<=n-1;i++)
		len[i]=strlen(str[i]);
	for(i=0;i<=n-1;i++)
	{
		if(panduan(str,i,len[i])==1)
			printf("yes\n");
		else
			printf("no\n");
	}
}
int panduan(char c[][21],int n,int l)
{
	int i,t=1;
	for(i=0;i<=l-1;i++)
	{
		if((c[n][i]>='0'&&c[n][i]<='9')||(c[n][i]>='a'&&c[n][i]<='z')||(c[n][i]>='A'&&c[n][i]<='Z')||c[n][i]=='_')
			t*=1;
		else
			t*=0;
	}
	if(c[n][0]>='0'&&c[n][0]<='9')
		t*=0;
	return(t);
}

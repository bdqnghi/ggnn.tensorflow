void main()
{
	char str[301],a[26]={97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122};
	int i,b[26]={0},num=0,j;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z')
			num++;
		for(j=0;j<26;j++)
			if(str[i]==a[j])
				b[j]=b[j]+1;
	}
	for(j=0;j<26;j++)
		if(b[j]!=0)
			printf("%c=%d\n",a[j],b[j]);
	if(num==0)
		printf("No\n");
}

void main()
{
	char string[N];
	int f[26]={0},i,j,s,count=1,d=0;
	s=strlen(string);
	gets(string);
	s=strlen(string);
	for(i=0;i<s;i++)
		if(string[i]<='z' && string[i]>='a')
		{
			d++;
			f[string[i]-'a']=1;
			for(j=i+1;j<s;j++)
				if(string[j]==string[i])
				{
					f[string[i]-'a']++;
					string[j]=0;
				}
		}
	if(d==0)
		printf("No\n");
	for(i=0;i<26;i++)
		if(f[i])
			printf("%c=%d\n",i+'a',f[i]);
}
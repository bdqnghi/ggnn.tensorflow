main()
{
	int i,a[26];
	char s[300],l[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},f=0;

	gets(s);
	for(i=0;i<26;i++)
	{a[i]=0;}

	for(i=0;i<300;i++){
if(s[i]<='z'&&s[i]>='a')
a[s[i]-'a']++;
else if(s[i]==0) break;
}
			
	for(i=0;i<26;i++)
	{
		if(a[i]!=0){printf("%c=%d\n",l[i],a[i]);f=1;}
	}
if(f==0) puts("No");
}
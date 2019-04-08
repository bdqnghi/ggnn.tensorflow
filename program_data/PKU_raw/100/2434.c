int main()
{

    char s[302];
	int i,len,f;
	int a[30],b[30];
	scanf("%s",s);
	for (i=0;i<=27;i++){
		a[i]=0;b[i]=0;
	}
	len=strlen(s);
	f=0;
	for (i=0;i<len;i++){
		if ((s[i]>='A')&&(s[i]<='Z')) {
			a[s[i]-'A']++;f=1;
		}
		if ((s[i]>='a')&&(s[i]<='z')) {
			b[s[i]-'a']++;f=1;
		}
	}
	if (f==0){
		printf("No");
		return 0;
	}
	for (i=0;i<26;i++){
		if (a[i]>0) printf("%c=%d\n",i+'A',a[i]);
	}
	for (i=0;i<26;i++){
		if (b[i]>0) printf("%c=%d\n",i+'a',b[i]);
	}
	return 0;
}

int b[26]={0};
main()
{
	char a[300];
	
	int i,n,t,s=0;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++){
		if(a[i]<='z'&&a[i]>='a'){
			b[a[i]-'a']++;
		}
	}
	for(t=0;t<26;t++)
			s+=b[t];
	if(s==0)
		printf("No");
	else{
		for(i=0;i<26;i++){
		
		if(b[i]>0)
			printf("%c=%d\n",i+'a',b[i]);
		}
	}
	return 0;
}
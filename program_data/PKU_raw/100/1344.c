
int f(char s[],char c){
	unsigned int i,count=0;
	for(i=0;i<strlen(s);i++){
		if(s[i]==c){
			count++;
		}
	}
	if(count){
		printf("%c=%d\n",c,count);
		
	}
	return 0;
}

main()
{
	char s[300],b;
	int i,len,count=0;
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]<='z'&&s[i]>='a'){
			count++;break;
		}
	}
	if(count==0){
		printf("No\n");
	}else{
		for(b='a';b<='z';b++){
			f(s,b);
		}
	}
}


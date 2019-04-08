void main()
{ char s[100];
	int i,j,n;
	gets(s);
	for(i=0;i<strlen(s);i++){
		if(s[i]!=' ')
		printf("%c",s[i]);
		else{
	if(s[i-1]==' ')
		continue;
		else printf("%c",s[i]);}}
}



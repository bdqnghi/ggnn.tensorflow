void main()
{ char s[100];
	int i;
	gets(s);
	for(i=0;i<strlen(s);i++){
		if(s[i]!=' '||s[i]==' '&&s[i-1]!=' ')
		printf("%c",s[i]);
		else
	
		continue;
		}
}


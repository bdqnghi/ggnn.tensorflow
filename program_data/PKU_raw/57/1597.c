void main()
{
	int n, i, j, len;
	char s[50][15], *p;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%s", s[i]);
	    len=strlen(s[i]);
		for(j=0;j<len;j++){
			p=s[i]+j;
			while(strcmp(p,"er\0")==0||strcmp(p,"ly\0")==0||strcmp(p,"ing\0")==0){
				*p='\0';
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n", s[i]);
	}
}
int main()
{
	int n,k,i,l;
	scanf("%d",&n);
	for(k=0;k<=n;k++){
		char *p,s[256];
		gets(s);
		l=strlen(s);
		for(p=s,i=0;*p;p++,i++){
			if(i==l-1){			
				if(*p=='A'){
				printf("T\n");
			}else if(*p=='T'){
				printf("A\n");
			}else if(*p=='C'){
				printf("G\n");
			}else if(*p=='G'){
				printf("C\n");
			}
			}else{
			if(*p=='A'){
				printf("T");
			}else if(*p=='T'){
				printf("A");
			}else if(*p=='C'){
				printf("G");
			}else if(*p=='G'){
				printf("C");
			}
			}
		}
	}
	return 0;
} 

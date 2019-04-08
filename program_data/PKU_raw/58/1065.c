int main()
{
	int i,n;
	char a[81];
	gets(a);
	n=atoi(a);
	for(i=1;i<=n;i++){
		int j=0;
		gets(a);
		char *p=a;
		char *q;
		q=p;
		for(p=q;*p!='\0';p++){
			if(p==q){	
				if(*p=='_'||((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z'))){
					j=1;
				}else{
					j=0;
					break;
				}
			}else{
				if(*p=='_'||((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z'))||(*p>='0'&&*p<='9')){
					j=1;
				}else{
					j=0;
					break;
				}
			}
		}
		printf("%d\n",j);
	}
	return 0;
}
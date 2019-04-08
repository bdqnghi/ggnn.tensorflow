


int main()
{
	char sz[81];
	int i,n,judge;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		judge=0;
		if(i==0){
			getchar();
		}
		gets(sz);

		char *p;

		for(p=sz;p<sz+strlen(sz);p++){
			if(p==sz){
				if((*p>='A'&&*p<='Z')||(*p>='a'&&*p<='z')||*p=='_'){
					judge=1;
				}else{
					break;
				}
			}else{
				if((*p>='A'&&*p<='Z')||(*p>='a'&&*p<='z')||(*p>='0'&&*p<='9')||*p=='_'){
					judge=1;
				}else{
					judge=0;
					break;
				}
			}
		}
	
	printf("%d\n",judge);

	}

	return 0;
}


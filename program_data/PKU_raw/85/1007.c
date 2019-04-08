int judge(char *zfc)
{
	char *p;
	p=zfc;
	for(;*p!='\0';p++){
		if(*p=='_'||('A'<=*p&&*p<='Z')||('a'<=*p&&*p<='z')||('0'<=*p&&*p<='9'&&p!=zfc)){
			continue;
		}else{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i;
	char z[3];
	gets(z);
	int n=atoi(z);
	for(i=0;i<n;i++){
		char zfc[81];
		gets(zfc);
		if(judge(zfc)){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
	return 0;
}

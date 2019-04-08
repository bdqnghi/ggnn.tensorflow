int main()
{
	int n,i,j,l,judge;
	char str[81];
	gets(str);
	n=atoi(str);
	for(j=1;j<=n;j++){
		gets(str);
		l=strlen(str);
		judge=1;
		for(i=0;i<l;i++){
			if(i==0){
				if(*(str)!='_'&&(*(str)>'Z'||*(str)<'A')&&(*(str)>'z'||*(str)<'a')){
					judge=0;
					break;
				}
			}
			else{
				if(*(str+i)!='_'&&(*(str+i)>'Z'||*(str+i)<'A')&&(*(str+i)>'z'||*(str+i)<'a')&&(*(str+i)>'9'||*(str+i)<'0')){
					judge=0;
					break;
				}
			}
		}
		printf("%d\n",judge);
	}
	return 0;
}
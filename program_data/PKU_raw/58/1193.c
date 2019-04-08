int start(char a);
int sym(char b);
int main()
{
	int n,i,j,result,len;
	char c[100][81],a[100];
	gets(a);
	n=atoi(a);
	for(i=0;i<n;i++){
	gets(*(c+i));
	}
	for(i=0;i<n;i++){
	len=strlen(*(c+i));
	result=1;
	if(start(*(c[i]+0))==0)
		printf("0\n");
	if(start(*(c[i]+0))==1){
		for(j=0;j<len;j++){
		result*=sym(*(c[i]+j));
		}
		if(result==1){
		printf("1\n");
		}else{
		printf("0\n");
		}
	}
	}
	return 0;
}
int start(char a){
	int m;
	if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||a=='_'){
	m=1;
	}else{
	m=0;
	}
	return m;
}
int sym(char b){
	int n;
	if((b>='a'&&b<='z')||(b>='A'&&b<='Z')||(b>='0'&&b<='9')||b=='_'){
	n=1;
	}else{
	n=0;
	}
	return n;
}

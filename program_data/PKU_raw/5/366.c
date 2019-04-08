int main(){
	int n,k=0,i;
	double e;
	char str[501],s[501];
	scanf("%lf",&e);
	scanf("%s %s",str, s);
	for(i=0;i<strlen(str);i++){
		if(str[i]!='A'&&str[i]!='T'&&str[i]!='G'&&str[i]!='C'){
			printf("error");
		    return 0;
		}
	}
	for(i=0;i<strlen(s);i++){
		if(s[i]!='A'&&s[i]!='T'&&s[i]!='G'&&s[i]!='C'){
			printf("error");
			return 0;
		}
	}
	if(strlen(str)!=strlen(s)){
		printf("error");
	}else if(strlen(str)==strlen(s)){
		n=strlen(s);
		for(i=0;i<n;i++){
			if(str[i]==s[i]){
				k++;
			}
		}
		if((1.0*k/n)>e){
			printf("yes");
		}else{
			printf("no");
		}
	}
	return 0;
 }



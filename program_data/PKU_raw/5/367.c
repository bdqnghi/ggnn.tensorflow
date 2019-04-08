int main(){
	int a,b,i;
	double k,c=0;
	char d[501],e[501];
	scanf("%lf",&k);
	scanf("%s",&d);
	scanf("%s",&e);
	a=strlen(d);
	b=strlen(e);
	if(a>b||a<b){
		printf("error");
		return 0;
	}
	for(i=0;i<a;i++){
		if(d[i]!='A'&&d[i]!='C'&&d[i]!='G'&&d[i]!='T'){
			printf("error");
			return 0;
		}
	}
	for(i=0;i<b;i++){
		if(e[i]!='A'&&e[i]!='C'&&e[i]!='G'&&e[i]!='T'){
			printf("error");
			return 0;
		}
	}
	for(i=0;i<a;i++){
		if(d[i]==e[i]){
			c++;
		}
	}
	if((c/(1.0*a))>k){
		printf("yes");
	}
	else printf("no");
	return 0;
}

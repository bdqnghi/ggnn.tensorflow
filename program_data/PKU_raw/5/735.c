int main(){
	double r;
	char s[501];
	char t[501];
	int m,n,i,k=0;
	scanf("%lf",&r);
	scanf("%s",&s);
	scanf("%s",&t);
	m=strlen(s);
	n=strlen(t);
	if(m!=n){
		printf("error");
	}else{
		for(i=0;i<n;i++){
			if((s[i]!='A'&&s[i]!='G'&&s[i]!='C'&&s[i]!='T')||(t[i]!='A'&&t[i]!='G'&&t[i]!='C'&&t[i]!='T')){
				k=-1;
				break;
			}else if(s[i]==t[i]){
				k++;
			}
		}
		if(k==-1){
			printf("error");
		}else if((1.0*k/n)>r){
			printf("yes");
		}else{
			printf("no");
		}
	}
	return 0;
}

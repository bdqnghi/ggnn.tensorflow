int main(){
	int i, a=0, b;
	double xg;
	char s1[501], s2[501];
	scanf("%lf %s %s", &xg, s1, s2);
	if(strlen(s1)!=strlen(s2)){
		printf("error");
		return 0;
	}
	for(i=0;s1[i]!='\0';i++){
		if((s1[i]=='T'||s1[i]=='A'||s1[i]=='G'||s1[i]=='C')&&(s2[i]=='T'||s2[i]=='A'||s2[i]=='G'||s2[i]=='C')){
			if(s1[i]==s2[i]){
			a++;
			}
		}
		else{
			printf("error");
			return 0;
		}
	}
	b=strlen(s1);
	if(a*1.0/b>xg){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}

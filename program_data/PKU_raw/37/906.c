int test(char A,char B);
int main(){
	int n,i,a,b,len,TEST,CHECK=1,SUM=0;
	char input[NO];
	char *pinput=input;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",input);
		len=strlen(input);
		CHECK=1;
		for(a=0;a<len&&CHECK;a++){
			SUM=0;
			for(b=0;b<len;b++){
				if(a!=b){
					TEST=test(*(pinput+a),*(pinput+b));
					SUM+=TEST;
				}
			}
			if(SUM==0){
				printf("%c\n",*(pinput+a));
				CHECK=0;
			}
		}
		if(CHECK==1){
			printf("no\n");
		}
	}
	return 0;
}
int test(char A,char B){
	if(A==B)
		return 1;
	if(A!=B)
		return 0;
}
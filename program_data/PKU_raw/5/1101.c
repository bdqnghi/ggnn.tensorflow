int main(){
	double n;
	double m;
	char jianji[2][501];
	int len1,len2;
	int i;
	int sum=0;
	scanf("%lf%s%s",&n,jianji[0],jianji[1]);
	len1=strlen(jianji[0]);
	len2=strlen(jianji[1]);
	if(len1!=len2){
		printf("error");
		return 0;
	}
	else{
		for(i=0;i<len1;i++){
			if((jianji[0][i]!='A'&&jianji[0][i]!='T'&&jianji[0][i]!='C'&&jianji[0][i]!='G')||(jianji[1][i]!='A'&&jianji[1][i]!='T'&&jianji[1][i]!='C'&&jianji[1][i]!='G')){
				printf("error");
				return 0;
			}
			else if(jianji[0][i]==jianji[1][i]){
				sum+=1;
			}
		}
		m=(1.0*sum)/len1;
		if(m>n){
			printf("yes");
		}else{
			printf("no");
		}
	}
	return 0;
}
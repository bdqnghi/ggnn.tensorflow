int dijitian(int Y,int M,int D);
int main(){
	int n;
	scanf("%d",&n);
	int Y[200];
	int M[200];
	int m[200];
	int i;
	for(i=0;i<n;i++){
		scanf("%d%d%d",&Y[i],&M[i],&m[i]);
	}
	for(i=0;i<n;i++){
		if((dijitian(Y[i],M[i],1)-dijitian(Y[i],m[i],1))%7==0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}

		}
	
	return 0;
}
int dijitian(int Y,int M,int D){
	int run(int Y);
	int i;
	int result=0;
	for(i=1;i<M;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10){
			result+=31;
		}if(i==4||i==6||i==9||i==11){
			result+=30;
		}if(i==2){
			if(run(Y)){
				result+=29;
			}else{
				result+=28;
			}
		}
	}result=result+D;
	return result;
}
int run(int Y){
	int Q;
	if(Y%400==0||(Y%4==0&&Y%100!=0)){
		Q=1;
	}else {
		Q=0;
	}
return Q;
}

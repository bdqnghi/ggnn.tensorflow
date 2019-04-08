int main(){
	double e;
	char zf[2][501],count=0,c,w=0;
    scanf("%lf%c",&e,&c);
	gets(zf[0]);
	gets(zf[1]);
    int a=strlen(zf[0]),b=strlen(zf[1]);
	if(a!=b){
		printf("error");
	}else{
		for(int m=0;m<a;m++){
			for(int o=0;o<2;o++){
				if(zf[o][m]!='A'&&zf[o][m]!='T'&&zf[o][m]!='G'&&zf[o][m]!='C'){
					w++;
				}
			}
		}
		if(w!=0){
			printf("error");
		}else{
		for(int i=0;i<a;i++){
			if(zf[0][i]==zf[1][i]){
				count++;
			}
		}
		if(1.0*count/a>e){
			printf("yes");
		}else{
			printf("no");
		}
		}
	}
    
    return 0;
}
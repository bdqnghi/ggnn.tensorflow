int main(){
	double b,c;
	char D[2][501];
	int z,t;
	z=t=0;
	scanf("%lf",&b);
	scanf("%s%s",D[1],D[0]);
	if(strlen(D[1])!=strlen(D[0])){
		printf("error");
		return 0;
	}
	z=strlen(D[1]);
	for(int i=0;D[1][i];i++){
		if((D[1][i]!='A'&&D[1][i]!='T'&&D[1][i]!='C'
			&&D[1][i]!='G')||(D[0][i]!='A'&&D[0][i]!='T'&&D[0][i]!='C'&& D[0][i]!='G')){
			printf("error");
			return 0;
		}
          if(D[1][i]==D[0][i]){
			t++;
		}
	}
	c=(double)t/(double)z;
	if(c>=b){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}

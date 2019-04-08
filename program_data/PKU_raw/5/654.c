int main(){
	char x[600],y[600];
	int b=0,i;
	double a;
	scanf("%lf\n",&a);
	scanf("%s\n",x);
	scanf("%s",y);
	if(strlen(x)!=strlen(y)){
		printf("error");
		return 0;
	}
	for(i=0;i<600;i++){
		if(x[i]!='A'&&x[i]!='G'&&x[i]!='C'&&x[i]!='T'&&x[i]!=0){
			printf("error");
			return 0;
		}
		if(y[i]!='A'&&y[i]!='G'&&y[i]!='C'&&y[i]!='T'&&y[i]!=0){
			printf("error");
			return 0;
		}
		if(x[i]==0){
			break;
		}
		if(x[i]==y[i]){
			b++;
		}
	}
	if((1.0*b/strlen(x))>=a){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}
int main()
{
	int i,s=0,j=1;
	double r;
	char d1[501],d2[501];
	scanf("%lf %s %s",&r,d1,d2);
	if(strlen(d1)!=strlen(d2)){
		printf("error");
	}else{
		for(i=0;i<strlen(d1);i++){
			if(d1[i]!='A'&&d1[i]!='C'&&d1[i]!='G'&&d1[i]!='T'&&d2[i]!='A'&&d2[i]!='G'&&d2[i]!='C'&&d2[i]!='T'){
				j=0;
				printf("error");
				break;
			}else if(d1[i]==d2[i]){
				s++;
			}
		}
		if(j==1){
			if(1.0*s/strlen(d1)>r){
				printf("yes");
			}else{
				printf("no");
			}
		}
	}
	return 0;
}
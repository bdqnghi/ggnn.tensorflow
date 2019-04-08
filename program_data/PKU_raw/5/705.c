int main(){
	int i,j,count=0;
	double bl;
	char a[508],b[508];
	scanf("%lf",&bl);
	scanf("%s%s",a,b);
	if(strlen(a)!=strlen(b)){
		printf("error");return 0;
	}
	for(i=0;a[i]!=0;i++){
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){
			printf("error");return 0;
		}
	}
	for(i=0;b[i]!=0;i++){
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'){
			printf("error");return 0;
		}
	}
	for(i=0;a[i];i++){
		if(a[i]==b[i]){
			count++;
		}
	}
	if((1.0*count/(strlen(a)))>bl){
		printf("yes");
	}else{
		printf("no");
	}


	
	return 0;
}
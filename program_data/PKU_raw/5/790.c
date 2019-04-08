    int main(){
    double n;
	scanf("%lf\n",&n);
	char a[501],b[501];
	scanf("%s\n",&a);
	scanf("%s",&b);
    int la=strlen(a),lb=strlen(b),i;
	int s=0;double e;
	if(la!=lb){
		printf("error");}
	else{
	     for(i=0;i<la;i++){
	     if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'||b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'){
			printf("error");
			break;
	}
	
	else{
    if(a[i]==b[i]){
		s=s+1;}
	if(i==la-1){
	e=1.0*s/la;
	if(e>n){
	printf("yes");}
	else{
		printf("no");}
	}
	}
		 }
	}
	return 0;
}
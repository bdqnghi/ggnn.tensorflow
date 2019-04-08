int main(){
	double a;
	char b[101];
	char c[101];
	scanf("%lf%s%s",&a,b,c);
	if(strlen(b)!=strlen(c)){
		printf("error\n");
		return 0;
	}
	int n=strlen(b);
	int i;
	for(i=0;i<n;i++){
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'){
			printf("error\n");
		    return 0;
		}
		if(c[i]!='A'&&c[i]!='T'&&c[i]!='T'&&c[i]!='G'&&c[i]!='C'){
			printf("error\n");
			return 0;
		}
	}
	int count=0;
	for(i=0;i<n;i++){
		if(b[i]==c[i]){
			count+=1;
		}
	}
	double d;
	d=1.0*count/n;
	if(d>a){
		printf("yes\n");
	}else{
		printf("no\n");
	}
	return 0;
}



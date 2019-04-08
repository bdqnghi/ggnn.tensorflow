int main(){
	int i, j, k, p=0, q=0, judge=0;
	double n;
	char a[501], b[501];
	scanf("%lf", &n);
	scanf("%s", a);
	scanf("%s", b);
	p=strlen(a);
	for(i=0;i<p;i++){
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){
			printf("error");
			return 0;
		}
	}
	for(i=0;i<p;i++){
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'){
			printf("error");
			return 0;
		}
	}
	for(i=0;i<p;i++){
		if(a[i]==b[i]){
			q++;
		}
	}
	if(1.0*q/p>=n){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}
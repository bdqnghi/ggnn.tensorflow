int main(){
	double n;
	int i,l,r=1,s=0;
	char a[2][500];
	scanf("%lf",&n);
	for(i=0;i<2;i++){
		scanf("%s",a[i]);
	}
	if(strlen(a[0])!=strlen(a[1])){
	    r=0;
	}else{
		l=strlen(a[0]);
		for(i=0;i<l;i++){
			if((a[0][i]!='A'&&a[0][i]!='C'&&a[0][i]!='T'&&a[0][i]!='G')||(a[1][i]!='A'&&a[1][i]!='C'&&a[1][i]!='T'&&a[1][i]!='G')){
				r=0;
				break;
			}else if(a[0][i]==a[1][i]){
				s++;
			}
		}
	}
	if(r==0){
		printf("error");
	}else if(1.0*s/l>=n){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}

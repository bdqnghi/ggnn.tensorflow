int main(){
	double p,q;
	int a,b,m=0,brak=0;
	scanf("%lf",&p);
	char k[600],kk[600];
	scanf("%s",k);
	scanf("%s",kk);
	a=strlen(k);
	b=strlen(kk);
	for(int h=0;;h++){
		if(a!=b){
		printf("error");
		break;
		}
		for(int c=0;c<a;c++){
			if(!(k[c]=='A'||k[c]=='T'||k[c]=='C'||k[c]=='G')){brak++;}
            if(!(kk[c]=='A'||kk[c]=='T'||kk[c]=='C'||kk[c]=='G')){brak++;}
		}
		if(brak!=0){
			printf("error");
		    break;
		}
		for(int i=0;i<a;i++){
			if(k[i]==kk[i]){
				m++;
			}
		}
        q=m/(a*1.0);
        if(q>=p){
			printf("yes");
		}
		if(q<p){
			printf("no");
		}
		break;
	}
	return 0;
}

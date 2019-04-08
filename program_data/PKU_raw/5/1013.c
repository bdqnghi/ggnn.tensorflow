int main(){
	double a,m,n,p;
	int l,k,q,i;
	char b[500],c[500];
	k=0;
	scanf("%lf",&a);
	scanf("%s\n%s",b,c);
	l=strlen(b);
	q=strlen(c);
	if(l!=q){
		printf("error");
		return 0;
	}
	for(i=0;i<l;i++){
		if((b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')||(c[i]!='A'&&c[i]!='T'&&c[i]!='C'&&c[i]!='G')){
			printf("error");
			return 0;
		}
	}
	for(i=0;i<l;i++){
		if(b[i]==c[i]){
			k++;
		}
	}
	m=l;
	n=k;
	p=n/m;
	if(p>a){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}
	
			


		

int main(){
	int i,m,n;
	double d,k,r;
	k=0;
	char p[N],q[N];
	scanf("%lf",&r);
	scanf("%s",p);	
	scanf("%s",q);
	m=strlen(p);
	n=strlen(q);
	if(m!=n){
		printf("error");
	}else{
		for(i=0;i<n;i++){
			if((p[i]!='A'&&p[i]!='T'&&p[i]!='C'&&p[i]!='G')||(q[i]!='A'&&q[i]!='T'&&q[i]!='C'&&q[i]!='G')){
				printf("error");
				return 0;
			}else if(p[i]==q[i]){
				k++;
			}
		}
			d=1.0*k/n;
			if(d>r){
				printf("yes");
			}else{
				printf("no");
			}
	}
	return 0;
}

int main(){
	int i,a,b,m,n,z;
	double x;
	char p[500],q[500];
	scanf("%lf",&x);
	scanf("%s%s",p,q);
	a=strlen(p);b=strlen(q);
    for(i=0;i<a;i++){
		if((p[i]!='A')&&(p[i]!='T')&&(p[i]!='C')&&(p[i]!='G')){
			m=0;
		}
	}
    for(i=0;i<b;i++){
		if((q[i]!='A')&&(q[i]!='T')&&(q[i]!='C')&&(q[i]!='G')){
			n=0;
		}
	}
	if(a!=b||m==0||n==0){
		printf("error");
	}else{
		z=0;
		for(i=0;i<a;i++){
			if(p[i]==q[i]){
				z++;
			}
		}
		if((1.0*z/a)>x){printf("yes");}
		else {printf("no");}
	}
	return 0;
}

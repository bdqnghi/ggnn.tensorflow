int main(){ 
	double z,q;
	char a[1][1000],b[1][1000];
	int x,y,m,n,s=0,i;
	scanf("%lf",&q);
	scanf("%s%s",a[0],b[0]);
	m=strlen(a[0]);
	n=strlen(b[0]);
	if(m!=n){
		printf("error");
		return 0;
	}
	for(i=0;i<m;i++){
		if(a[0][i]!='A'&&a[0][i]!='T'&&a[0][i]!='C'&&a[0][i]!='G'||b[0][i]!='A'&&b[0][i]!='T'&&b[0][i]!='C'&&b[0][i]!='G'){
			printf("error");
		  return 0;

		}
		if(a[0][i]==b[0][i]){
			s++;
		}
	}
	z=1.0*s/m;
	if(z>q){printf("yes");}
	else{printf("no");}



	return 0;
}
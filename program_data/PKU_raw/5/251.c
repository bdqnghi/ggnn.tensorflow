int main(){
	double a,y=0,m,n,t;
	int i,q=0;
	char dna1[501];
	char dna2[501];
	scanf("%lf",&a);
	scanf("%s",dna1);
	scanf("%s",dna2);
	m=strlen(dna1);
	n=strlen(dna2);
	if(m==n){
		for(i=0;i<m;i++){
			if((dna1[i]=='A'||dna1[i]=='T'||dna1[i]=='C'||dna1[i]=='G')&&(dna2[i]=='A'||dna2[i]=='T'||dna2[i]=='C'||dna2[i]=='G')){
			}else{
				q=1;
				break;
			}
		}
		for(i=0;i<m;i++){
			if(q==1){
				break;
			}else if(dna1[i]==dna2[i]){
				y++;
			}else if(dna1[i]!=dna2[i]){

			}
		}
		t=y/m;
	}else if(m!=n){
			q=1;
	}
	if((t>=a&&a!=0&&q==0)||(q==0&&t>a&&a==0)){
		printf("yes");
	}else if((t<a)&&(a!=0)&&(q==0)||((q==0)&&(t==0)&&(a==0))){
		printf("no");
	}else if(q==1){
		printf("error");
	}
	return 0;
}

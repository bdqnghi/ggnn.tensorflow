int main(){
	int q,w,e=0,r=1,i;
	double a,b;
	char A[1000],B[1000];
	scanf("%lf",&a);
	scanf("%s",A);
	scanf("%s",B);
	q=strlen(A);
	w=strlen(B);
//	printf("%d%d",q,w);
//	puts(A);puts(B);
	if(q!=w){
		printf("error");
		r=-1;
	}else{
		for(i=0;A[i]!='\0';i++){
			
			if((A[i]!='T'&&A[i]!='C'&&A[i]!='A'&&A[i]!='G')||(B[i]!='T'&&B[i]!='C'&&B[i]!='A'&&B[i]!='G')){
				r=-1;
				printf("error");
				break;
			}else if(A[i]!=B[i]){
				continue;
			}else if(A[i]==B[i]){
				e++;
			}
		}
	}
//	printf("%d",e);
	if(r==1){
		b=(e*1.0)/(q*1.0);
//	printf("%lf",b);
		if(b>a){
			printf("yes");
		}else{
			printf("no");
		}
	}
	return 0;
}




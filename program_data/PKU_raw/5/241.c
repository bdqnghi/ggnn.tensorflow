int main(){
	double a,bl;
	int n1,n2,i,k=0,sum=0;
	char dna1[501],dna2[501];
	scanf("%lf",&a);
	scanf("%s%s",dna1,dna2);
	n1=strlen(dna1);
	n2=strlen(dna2);
	if(n1!=n2){
		printf("error");
	}else{
		for(i=0;i<n1;i++){
			if(dna1[i]!='A'&&dna1[i]!='G'&&dna1[i]!='C'&&dna1[i]!='T'){
				k=1;
				break;
			}
			if(dna2[i]!='A'&&dna2[i]!='G'&&dna2[i]!='C'&&dna2[i]!='T'){
				k=1;
				break;
			}
			if(dna1[i]==dna2[i]){
				sum++;
			}
		}
		if(k==0){
			bl=(double)sum/n1;
			if(bl>a){
				printf("yes");
			}else{
				printf("no");
			}
		}else{
			printf("error");
		}
	}
return 0;	
}
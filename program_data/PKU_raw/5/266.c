int main(){
	double a;
	int i,j=0;
	char dna1[501],dna2[501];
	scanf("%lf",&a);
	scanf("%s",&dna1);
	scanf("%s",&dna2);
	int len1=strlen(dna1);
    int len2=strlen(dna2);
	if(len1!=len2){
		printf("error");
		return 0;
	}
	for(i=0;i<len1;i++){
		if((dna1[i]!='A'&&dna1[i]!='T'&&dna1[i]!='G'&&dna1[i]!='C')||(dna1[i]!='A'&&dna1[i]!='T'&&dna1[i]!='C'&&dna1[i]!='G')){
			printf("error");
			return 0;
		}
	}
	for(i=0;i<len1;i++){
		if(dna1[i]==dna2[i]){
			j++;
		}
	}
	if(1.0*j/len1>a){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}
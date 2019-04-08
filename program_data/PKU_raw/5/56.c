int main()
{
	int i,a=0,m;
	double n,x;
	char dna1[501],dna2[501];
	scanf("%lf",&n);
	scanf("%s",dna1);
	scanf("%s",dna2);
	for(i=0;dna1[i]!='\0';i++){
		if(dna1[i]!=65&&dna1[i]!=67&&dna1[i]!=71&&dna1[i]!=84){
			printf("error");
			return 0;
		}
	}
	for(i=0;dna2[i]!='\0';i++){
		if(dna2[i]!=65&&dna2[i]!=67&&dna2[i]!=71&&dna2[i]!=84){
			printf("error");
			return 0;
		}
	}
	if(strlen(dna1)!=strlen(dna2)){
		printf("error");
	}else{
		m=strlen(dna1);
		for(i=0;dna1[i]!='\0';i++){
			if(dna1[i]==dna2[i]){
				a++;
			}
		}
		x=a*1.0/(1.0*m);
		if(x>n){
			printf("yes");
		}else{
			printf("no");
		}
	}
	return 0;
}
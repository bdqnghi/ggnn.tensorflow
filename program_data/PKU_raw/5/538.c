int main(){
	int i,len1=0,len2=0,len=0,flag=0;
	char dna1[501],dna2[501];
	double rate,ra;
	scanf("%lf%s%s",&rate,dna1,dna2);
	for(i=0;dna1[i];i++){
		if((dna1[i]=='A')||(dna1[i]=='T')||(dna1[i]=='G')||(dna1[i]=='C')){
			len1++;
		}else{
			flag=1;
			break;
		}	
	}	
	for(i=0;dna2[i];i++){
		if((dna2[i]=='A')||(dna2[i]=='T')||(dna2[i]=='G')||(dna2[i]=='C')){
			len2++;
		}else{
			flag=1;
			break;
		}	
	}
	if((len1!=len2)||flag==1){
		printf("error");	
	}else{
		for(i=0;i<len1;i++){
			if(dna1[i]==dna2[i]){
				len++;	
			}
		}
		ra=(double)len/len1;
		if(ra>rate){
			printf("yes");	
		}else{
			printf("no");
		}
	}	
	return 0;	
}
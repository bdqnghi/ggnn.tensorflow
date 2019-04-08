 
//max=(max>=arr[s])?max:arr[s];

int main(){
 int i,k=0;
 double xs,sj; 
 char dna1[600],dna2[600];
 scanf("%lf",&xs);
scanf("%s %s",dna1,dna2);
 if(strlen(dna1)!=strlen(dna2)){
	 printf("error");
	 return 0;
 }
 for(i=0;i<(strlen(dna1)-1);i++){
	 if(dna1[i]!='A'&&dna1[i]!='G'&&dna1[i]!='C'&&dna1[i]!='T'){
		 printf("error");
		 return 0;
	 }
	 if(dna2[i]!='A'&&dna2[i]!='G'&&dna2[i]!='C'&&dna2[i]!='T'){
		 printf("error");
		 return 0;
	 }
	 if(dna1[i]==dna2[i]){
		 k++;
	 }
 }
 sj=1.0*k/(strlen(dna1)-1);
 if(sj>xs){
	 printf("yes");
 }
 else
	 printf("no");
	return 0;
}
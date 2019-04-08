int main(){
   int len1,len2,i,j=0,flag1=0,flag2=0;
   char dna1[501],dna2[501];
   double b,b2;
   scanf("%lf",&b);
   scanf("%s",dna1);
   scanf("%s",dna2);
   len1=strlen(dna1);
   len2=strlen(dna2);
   for(i=0;i<len1;i++){
	   if((dna1[i]=='A')||(dna1[i]=='T')||(dna1[i]=='C')||(dna1[i]=='G')){
	      continue;
	   }
	   else{
		   flag1=1;
		   break;
	   }
   
   }
   for(i=0;i<len2;i++){
	   if((dna2[i]=='A')||(dna2[i]=='T')||(dna2[i]=='C')||(dna2[i]=='G')){
	      continue;
	   }
	   else{
		   flag2=1;
		   break;
	   }
   
   }
   if((len1!=len2)||(flag1==1)||(flag2==1)){
      printf("error");
   }
   else{
	   for(i=0;i<len1;i++){
		   if(dna1[i]==dna2[i]){
		      j++;
		   }
	   }
	   b2=1.0*j/len1;
       if(b2>b){
	      printf("yes");
	   }
	   else{
	      printf("no");
	   }
   }



return 0;
}
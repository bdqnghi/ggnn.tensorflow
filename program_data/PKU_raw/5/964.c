int main(){
  int len1,len2,i,same=0;
  double rate,z;
  char DNA[2][600];
  scanf("%lf",&rate);
  scanf("%s %s",DNA[0],DNA[1]);

 len1=strlen(DNA[0]);
 len2=strlen(DNA[1]);
 if(len1!=len2){
	 printf("error");
	 return 0;
 }
 else{
 for(i=0;i<len1;i++){
	 if(((DNA[0][i]!='A')&&(DNA[0][i]!='G')&&(DNA[0][i]!='C')&&(DNA[0][i]!='T'))||((DNA[1][i]!='A')&&(DNA[1][i]!='G')&&(DNA[1][i]!='C')&&(DNA[1][i]!='T'))){
		 printf("error");
		 return 0;
	 }
	 else{
	 if(DNA[0][i]==DNA[1][i])
		 same++;
 }
 }
z=(1.0*same)/len1;
if(z>=rate)
printf("yes");
else printf("no");

 }
return 0;

}

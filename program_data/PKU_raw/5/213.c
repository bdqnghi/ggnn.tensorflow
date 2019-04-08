int main(){
 double x,y;
 int i,t=1,r;
 char s1[500];
 char s2[500];
 scanf("%lf",&x);
 scanf("%s%s",s1,s2);
 int len1=strlen(s1);
 int len2=strlen(s2);
 if(len1!=len2){
	 t=0;
 }else{
	 int cnt=0;
	 for(i=0;i<len1;i++){
		 if((!(s1[i]=='A'||s1[i]=='T'||s1[i]=='C'||s1[i]=='G'))||  (!(s2[i]=='A'||s2[i]=='T'||s2[i]=='C'||s2[i]=='G')  ) ){
		 t=0;
		 }
	 }
	 for(i=0;i<len1;i++){
		 if(s1[i]==s2[i]){
		 cnt++;
		 }
	 }
	 y=1.0*cnt/len1;
	 if(y>x){
	 r=1;
	 }else{
	 r=2;
	 }
 }
 if(t==0){
	 printf("error");
 }else if(t==1&&r==1){
	 printf("yes");
	 }else if(t==1&&r==2){
	 printf("no");
	 }
return 0;
}
int main(){
 int i,p=0,r=0;
 double k,w;
 char s1[1000],s2[1000];
 scanf("%lf",&k);
 scanf("%s %s",s1,s2);
 if(strlen(s1)!=strlen(s2)){
 r++;
 }else{
	 for(i=0;i<strlen(s1);i++){
		 if(s1[i]!='A'&&s1[i]!='C'&&s1[i]!='G'&&s1[i]!='T'){
		 r++;
		 }
		 if(s2[i]!='A'&&s2[i]!='C'&&s2[i]!='G'&&s2[i]!='T'){
		 r++;
		 }
	 }
 }
 if(r>0){
	 printf("error");
 }else{
	 for(i=0;i<strlen(s1);i++){
		 if(s1[i]==s2[i]){
		 p++;
		 }
	 }
    w=1.0*p/(strlen(s1));
	if(w>k){
	printf("yes");
	}else{
		printf("no");
	}
 }
 return 0;
}
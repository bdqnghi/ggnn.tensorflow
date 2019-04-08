int main(){
	int i,l,n;
	char str[51][33]; 
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%s",str[i]);}
	 for(i=0;i<n;i++) {
		 l=strlen(str[i]); 
		 if((strcmp(&str[i][l-3],"ing")==0))  { 
			 str[i][l-3]='\0'; }
		 if((strcmp(&str[i][l-2],"er")==0||strcmp(&str[i][l-2],"ly")==0)){
			 str[i][l-2]='\0'; } 
	 }
		 for(i=0;i<n;i++) {
			 puts(str[i]);}
	 return 0;
}
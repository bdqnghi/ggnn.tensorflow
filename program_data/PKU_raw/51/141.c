main(){
 int n,i,j,len;
 char str[501];
 char*p1;
 char*p2;
 char word[510][5];
 int num[510];
 
 scanf("%d%s",&n,str);
 p1=p2=str;
 len=strlen(str);
 for(i=0;i<len-n+1;i++){
	 p2=p1;
	 for(j=0;j<n;j++){
		 word[i][j]=*p2;
		 p2++;
	 }
	 p1++;
 }/*??????????*/
 for(i=0;i<len-n+1;i++){
	 num[i]=1;
	 word[i][n]='\0';
 }
 for(i=0;i<len-n;i++){
	 for(j=i+1;j<len-n+1;j++){
		 if(strcmp(word[i],word[j])==0) num[i]++;
	 }
 }
 int max=num[0];
 for(i=1;i<len-n+1;i++){
	 if(max<num[i]) max=num[i];
 }
 if(max<=1) printf("NO");
 else{
	printf("%d",max);
	for(i=0;i<len-n+1;i++){
	 if(num[i]==max) printf("\n%s",word[i]);
	 }
	}
}

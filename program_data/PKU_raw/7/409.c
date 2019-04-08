int main(){ 
  int m=0,k,a,b,c,i,j;
  char s[3][256];
  scanf("%s",&s[0]);
  scanf("%s",&s[1]);
  scanf("%s",&s[2]);
  a=strlen(s[0]);
  b=strlen(s[1]);
  c=strlen(s[2]);
  for(i=0;i<a;i++){
	  for(j=0;j<b;j++){
		  if(s[0][i+j]==s[1][j]){
			m++;
		  }
	  }
	  if(m==b){
		  break;
	  }
	  m=0;
  }
  if(i==a){
	printf("%s",s[0]);
  }
  else{
	  for(k=0;k<i;k++){
		printf("%c",s[0][k]);
	  }
	  for(k=0;k<c;k++){
		printf("%c",s[2][k]);
	  }
	  for(k=i+b;k<a;k++){
		printf("%c",s[0][k]);
	  }
  }
	return 0;
 }
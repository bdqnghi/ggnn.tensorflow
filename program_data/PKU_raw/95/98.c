int main() 
{
  char str1[100],str2[100];
  gets(str1);
  gets(str2);
  int i,j;
  for(i=0;str1[i]!='0';i++){
	  if(str1[i]>='A'&&str1[i]<='Z'){
		  str1[i]=str1[i]+32;
	  }
	  else{
		  str1[i]=str1[i];
	  }
  }
  for(j=0;str2[j]!='0';j++){
	  if(str2[j]>='A'&&str2[j]<='Z'){
		  str2[j]=str2[j]+32;
	  }
	  else{
		  str2[j]=str2[j];
	  }
  }
  if(strcmp(str1,str2)==0){
	  printf("=\n");
  }
  else if(strcmp(str1,str2)>0){
	  printf(">\n");
  }
	else if(strcmp(str1,str2)<0){
	  printf("<\n");
  }
	 return 0;
}
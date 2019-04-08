int main() 
{
  char s[100],a[100],b[100];
  char zfc[100][100];
  int i,j,len,k=1,wz[100];
  gets(s);
  scanf("%s%s",a,b);
  len= strlen(s);
  wz[0]=0-1;
  for ( i = 0; i<len; i++ ){
	  if (s[i]==' ' ){
		  wz[k]=i;
		  k++;
	  }
  }
  wz[k]=len;
  for(i=0;i<k;i++){
	  for(j=wz[i]+1;j<wz[i+1];j++)
	  zfc[i][j-wz[i]-1]=s[j];
	  zfc[i][j-wz[i]-1]='\0';
  }
  if(strcmp(zfc[0],a)!=0){
		  printf("%s",zfc[0]);
	  
	  }else{
		  printf("%s",b);
	  }			 
   
  for(i=1;i<k;i++){
	  if(strcmp(zfc[i],a)!=0){
		  printf(" %s",zfc[i]);
	  
	  }else{
		  printf(" %s",b);
	  }	
  }

		 
  
 
  
  return 0;
}


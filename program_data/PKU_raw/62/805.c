int main(){
 int n,i,k,b=0;
 char jj[255];
  gets(jj);
  n=strlen(jj);
  for(k=0;k<n-1;k++){
	  if(jj[k]==' '&&jj[k+1]==' '){b++;
	  for(i=k;jj[i];i++){jj[i]=jj[i+1];}k=k-2;}}i=0;
  for(i=0;i<n-b;i++){
	  printf("%c",jj[i]);}
 
 return 0;
}

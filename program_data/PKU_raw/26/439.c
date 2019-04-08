int main(){
  char str[101],str1[101]; 
  int i,n,m,e; 
  gets(str);
  n=strlen(str);
  m=0;
  for(i=1;i<=n;i++){
    if(str[i]==' '&&str[i-1]==' ')
    continue;
    else{
    str1[m]=str[i];
    m++;                 
  } 
} printf("%c",str[0]);
  puts(str1);
  return 0;   
}
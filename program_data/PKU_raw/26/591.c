int main() {
  char str[110] ;
  int flag[110] ;
  memset(flag,1,sizeof(flag));
  gets(str);
  int len=strlen(str);
  int i;
  for(i=0; i<len-1;i++) { 
     if(str[i]==' ' && str[i+1]==' ')
       flag[i+1]=0 ;
  }
  for(i=0; i<len; i++)
     if(flag[i]!=0)
       printf("%c",str[i]);   
  return 1;
}
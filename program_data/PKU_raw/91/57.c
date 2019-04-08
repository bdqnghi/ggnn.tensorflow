int main(){
  char s[101];
  char *p,*q,c;
  int n,i;
  gets(s);
  n=strlen(s);
  q=s;
  p=s;
  for(i=0;i<n-1;i++){
   c=*p+*(p+1);
   p++;
   printf("%c",c);
   }
  c=*p+*q;
  printf("%c",c);
  
  }
int main(){
  int n,i;
  char *p;
  scanf("%d\n",&n);
  char s[n][81];
  for(i=0;i<n;i++)
    gets(s[i]);
  for(i=0;i<n;i++){
    int a=1;
    p=s[i];
    if(*p>=65&&*p<=90||*p==95||*p>=95&&*p<=122){
      p++;
      while(*p!=0){
        if(*p<48||*p>57&&*p<65||*p>90&&*p!=95&&*p<95||*p>122){
          a=0;
          break;
          }
        p++;
        }
      }
    else
      a=0;
    printf("%d\n",a);
    }
   
  }  
    
           
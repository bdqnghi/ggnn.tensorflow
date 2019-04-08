int main(){
    char i=0,aa[100];
    gets(aa);
    char *p,*q;
    p=aa;
    while(*p!='\0'){
    if(*p!=' ')
    cout<<*p;
    if(*p==' '){
       cout<<*p;
       q=p;
       q++;
       while(*q==' ')
               q++;
              q--;
              p=q;
               }   
            p++;
              }
              
              return 0;
              } 

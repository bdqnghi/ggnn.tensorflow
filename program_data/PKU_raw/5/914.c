int main(){
    double a,b;
    char s[501],t[501];
    char *p,*q;
    int m=0,n,l;
    scanf("%lf %s %s",&a,s,t);
    n=strlen(s);
    l=strlen(t);
    if(n==l){
       p=s;
       q=t;
       while(*p!='\0'){
           if(*p!='A'&&*p!='T'&&*p!='C'&&*p!='G'){
               printf("error");
               return 0;
           }
           else{
               if(*q!='A'&&*q!='T'&&*q!='C'&&*q!='G'){
                   printf("error");
                   return 0;
               }
               else{
                   if(*p==*q){m++;} 
                   p++;
                   q++;
               }
           }
           
       }
       b=m*1.0/n;
       if(b>a) printf("yes");
       else printf("no");
    }
    else printf("error");
    return 0;
}



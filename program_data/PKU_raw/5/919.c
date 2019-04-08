int main(){
    int x,y,i,a;
    double w,n;
    x=0;
    y=0;
    n=0;
    a=0;
    char sz[500],s[500];
    scanf("%lf",&w);
    scanf("%s",sz);
    scanf("%s",s);
    for(i=0;sz[i]!='\0';i++){
       x++; 
    }
    for(i=0;s[i]!='\0';i++){
       y++; 
    }
    if(x!=y){
       a=1;
    }
    else if(x==y){
        for(i=0;sz[i]!='\0';i++){
            if(sz[i]=='A'||sz[i]=='C'||sz[i]=='T'||sz[i]=='G'){
             if(sz[i]==s[i]){
                n=n+1;
             }
             else if(s[i]!='A'&&s[i]!='T'&&s[i]!='C'&&s[i]!='G'){
                a=1;
             }
            }
            else if(sz[i]!='A'&&sz[i]!='T'&&sz[i]!='C'&&sz[i]!='G'){
                a=1;
            }
        }
    }
       if(a==1){
           printf("error");
       }
    else if(a==0){
      n=1.0*n/x; 
        if(n>=w){
        printf("yes");
      }
      else if(n<w){
        printf("no");
      }
    }
    return 0;
}

int main(){
    char  sz[2][510];
    double a,e;
    int b,c,d,f;
    int s[2];
    d=0;
    scanf("%lf",&a);
    for(b=0;b<2;b++){
         scanf("%s",&sz[b]); 
         s[b]=strlen(sz[0]);
         for(f=0;f<s[b];f++){
              if(sz[b][f]!='A'&&sz[b][f]!='T'&&sz[b][f]!='G'&&sz[b][f]!='C'){
                      printf("error");
                      return 0;
              }
         }
    }
    if(s[0]!=s[1]){
        printf("error\n");
        return 0;
    }
   
    for(b=0;b<s[0];b++){
        if(sz[0][b]==sz[1][b]){
            d++;
        }
    }
    e=1.0*d/s[0];
    if(e>a){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}
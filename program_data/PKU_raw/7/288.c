int main (){
    int i,k,n,m=0,L,l1,l2;
    char s[256],a[100],b[100];
    scanf("%s",s);
    scanf("%s",a);
    scanf("%s",b);
    getchar();
    L=strlen(s);
    l1=strlen(a);
    l2=strlen(b);
    n=0;
    for (i=0;i<L;i++){
        if ( a[0]==s[i] ){
             n++;
             for ( k=1; k<l1; k++){
                 if ( s[i+k]==a[k]){
                      n++;
                 } else {
                        n=0;
                        break;
                 }
             }
        }
        if ( n==l1){
             for ( m=0; m<l2; m++){
                 s[i+m]=b[m];
             }
             break;
        }
    }    
    for ( k=0; k<i+m; k++){
        printf("%c",s[k]);
        getchar();
    }  
    for ( i =i+l1; i<L ;i++){
        printf("%c",s[i]);
        getchar();
    }
    return 0;
}

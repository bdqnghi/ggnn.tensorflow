int main(){
    int i,n,l1,l2,l;
    double t,c;
    char a[500];
    char b[500];
    scanf("%lf",&t);
    scanf("%s %s",a,b);
    l1=strlen(a);
    l2=strlen(b);
    //printf("%lf ",t);
    if(l1!=l2){
        printf("error");
        return 0;
    }
    l=l1;
    for(i=0;i<l;i++){
        if((a[i]!='A')&&(a[i]!='T')&&(a[i]!='C')&&(a[i]!='G')){
            printf("error");
            return 0;
        }
    }
    for(i=0;i<l;i++){
        if((b[i]!='A')&&(b[i]!='T')&&(b[i]!='C')&&(b[i]!='G')){
            printf("error");
            return 0;
        }
    }
    for(n=0,i=0;i<l;i++){
        if(a[i]==b[i]){
            n++;
        }
    }
    c=1.0*n/l;
    //printf(" %lf %d %d",c,n,l);
    if(c>t){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}

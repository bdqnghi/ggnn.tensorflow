int main(){
    char a[501],b[501];
    int r,t,n,q,e,i;
    double m,w;
    n=0;
    r=0;
    scanf("%lf %s %s",&m,a,b);
    q=strlen(a);
    e=strlen(b);
    for(i=0;a[i]!='\0';i++){
        if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C'){
            r++;
        }
    }
    for(i=0;b[i]!='\0';i++){
        if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'){
            r++;
        }
    }
    if(q!=e||r!=0){
        printf("error");
    }
    else{
    for(i=0;a[i]!='\0';i++){
        t=a[i]-b[i];
        if(t==0){
            n++;
        }
    }
    w=1.0*n/q;
    if(w>m){
        printf("yes");
    }
    else{
        printf("no");
    }
    }
    return 0;
}


int main(){
    int i,n,m,result;
    double c,w;
    int a=0;
    scanf("%lf",&w);
    scanf("\n");
    char xlyi[501],xler[501];
    gets(xlyi);
    gets(xler);
    n=strlen(xlyi);
    m=strlen(xler);
    if(m!=n){
        result=0;
    }else{
    for(i=0;i<n;i++){
        if((xlyi[i]!='A'&&xlyi[i]!='G'&&xlyi[i]!='C'&&xlyi[i]!='T')||(xler[i]!='A'&&xler[i]!='G'&&xler[i]!='C'&&xler[i]!='T')){
            result=0;
        }else{
            result=1;
        }
      }
    }
    if(result==1){
    for(i=0;i<m;i++){
            if(xlyi[i]==xler[i]){
                a++;
            }
        }
    }
    c=1.00*a/n;
    if(result==0){
        printf("error");
    }else if(c>=w){
        printf("yes");
    }else if(c<w){
        printf("no");
    }
    return 0;
}

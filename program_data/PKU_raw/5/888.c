int main(){
    int i,n,k,b;
    char sz[520],zfc[520];
    double a,m;
    scanf("%lf\n",&a);
    scanf("%s\n",sz);
    scanf("%s\n",zfc);
    n=strlen(zfc);
    k=0;b=0;
    if(strlen(sz)!=n){
        printf("error");
        b=1;
    }
    else{
        for(i=0;i<n;i++){
            if((sz[i]!='A'&&sz[i]!='T'&&sz[i]!='G'&&sz[i]!='C')||(zfc[i]!='A'&&zfc[i]!='T'&&zfc[i]!='G'&&zfc[i]!='C')){
                printf("error");
                b=1;
                break;
            }
            else{if(sz[i]==zfc[i]){k++;}
                }
        }
    }
    if(b==0){
        m=1.0*k/n;
        if(m>a){printf("yes");}
        else{printf("no");}
    }
    return 0;
}








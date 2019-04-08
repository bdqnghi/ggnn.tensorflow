int main(){
    char a[505],b[505];
    int i,j,m,sum=0,SUM=0;
    double e,n;



    scanf("%lf",&n);
    scanf("%s%s",&a,&b);

    if(strlen(a)!=strlen(b)){
        printf("error");
        }
    else{
        for(i=0;i<strlen(a);i++){
            if(((a[i]!='A')&&(a[i]!='G')&&(a[i]!='C')&&(a[i]!='T'))||((b[i]!='A')&&(b[i]!='G')&&(b[i]!='C')&&(b[i]!='T'))){
                SUM++;
                }
            else if(a[i]==b[i]){
                    sum++;
                    }
        }
        if(SUM!=0){
            printf("error");
            }
        else{
            m=strlen(a);
            e=(double)sum/m;
            if(e>n){
                printf("yes");
                }
            else{
                printf("no");
                }
        }
    }
    return 0;
}




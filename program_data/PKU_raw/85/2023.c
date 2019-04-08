int main(){
    int n=0,i=0,j=0,LEN=0,k=0;
    scanf("%d",&n);
    char zf[21];
    for(i=0;i<n;i++){
        j=0;
        scanf("%s",zf);
        LEN=strlen(zf);
        while(j<LEN){
            if((zf[j]>='a'&&zf[j]<='z')||(zf[j]>='A'&&zf[j]<='Z')||zf[j]=='_'||(j!=0&&zf[j]>='0'&&zf[j]<='9')){
                k=0;
                j++;
            }else{
                k=1;
                break;
            }
        }
        if(k==0){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    char jianji[n][260],hubu[n][260];
    for(int i=0;i<n;i++){
        scanf("%s",jianji[i]);
        int len=strlen(jianji[i]);
        for(int k=0;k<len;k++){
            if(jianji[i][k]=='A'){
                hubu[i][k]='T';
            }
            else if(jianji[i][k]=='T'){
                hubu[i][k]='A';
            }
            else if(jianji[i][k]=='C'){
                hubu[i][k]='G';
            }
            else if(jianji[i][k]=='G'){
                hubu[i][k]='C';
            }
        }
        for(int k=len;k<n;k++){
            hubu[i][k]='\0';
        }
    }
    for(int i=0;i<n-1;i++){
        printf("%s\n",hubu[i]);
    }
    printf("%s",hubu[n-1]);
    return 0;
}


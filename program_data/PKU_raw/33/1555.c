int main(){
    int n;
    scanf("%d",&n);
    char jjd[n][256];char pjjd[n][256];
    for(int i=0;i<n;i++){
        scanf("%s",jjd[i]);
        for(int k=0;k<256;k++){
            if(jjd[i][k]=='A'){pjjd[i][k]='T';}
            if(jjd[i][k]=='C'){pjjd[i][k]='G';}
            if(jjd[i][k]=='G'){pjjd[i][k]='C';}
            if(jjd[i][k]=='T'){pjjd[i][k]='A';}
            if(jjd[i][k]==0){break;}
       
    }printf("%s\n",pjjd[i]);}
    return 0;
}
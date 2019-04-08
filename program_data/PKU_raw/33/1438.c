int main(){
    int n,i,j;
    char num[100];
    gets(num);
    n=atoi(num);
    char jjl[n][260];
    for(i=0;i<n;i++){
        gets(jjl[i]);
        for(j=0;jjl[i][j]!='\0';j++){
            if(jjl[i][j]=='A'){
                jjl[i][j]='T';
            }else if(jjl[i][j]=='T'){
                jjl[i][j]='A';
            }else if(jjl[i][j]=='G'){
                jjl[i][j]='C';
            }else if(jjl[i][j]=='C'){
                jjl[i][j]='G';
            }
        }
        puts(jjl[i]);
    }
    return 0;
}

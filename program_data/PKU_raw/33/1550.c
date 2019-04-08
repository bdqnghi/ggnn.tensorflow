int main(){
    int n;
    scanf("%d",&n);
    char sr[n][256];
    for(int i=0;i<n;i++){
        scanf("%s",sr[i]);
    }
    for(int i=0;i<n;i++){
        int m=strlen(sr[i]);
        for(int j=0;j<m;j++){
            if(sr[i][j]=='T'){
                printf("A");
            }
            if(sr[i][j]=='A'){
                printf("T");
            }
            if(sr[i][j]=='C'){
                printf("G");
            }
            if(sr[i][j]=='G'){
                printf("C");
            }
            if(j==m-1){
                printf("\n");
            }
        }
    }
    return 0;
}



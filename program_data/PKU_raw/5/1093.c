int main(){
    int i,j,a,b,p=0;
    float m,k,s=0;
    char zfc[2][500],n[10];
    gets(n);
    m=atof(n);
    for(i=0;i<2;i++){
        gets(zfc[i]);
    }
    a=strlen(zfc[0]);
    b=strlen(zfc[1]);
    if(a!=b){
        printf("error");
    }
    else{
        for(i=0;i<2;i++){
            for(j=0;zfc[i][j]!='\0';j++){
                if(zfc[i][j]!='A'&&zfc[i][j]!='G'&&zfc[i][j]!='C'&&zfc[i][j]!='T'){
                    p=1;
                }
            }
        }
        if(p==0){
            for(i=0;zfc[0][i]!='\0';i++){
                    if(zfc[0][i]==zfc[1][i]){
                        s++;
                    }
                }
                k=s/(a*1.0);
                if(k>m){
                    printf("yes");
                }
                else{
                    printf("no");
                }
            }
            else{
                printf("error");
            }
        }
        return 0;
    }

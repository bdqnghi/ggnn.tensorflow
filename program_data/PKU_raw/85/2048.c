int main(){
    char s[100][20];
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s[i]);
        for(j=0;s[i][j]!='\0';j++){
            if(!((s[i][j]=='_')||(s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]>='A'&&s[i][j]<='Z')||(s[i][j]>='0'&&s[i][j]<='9'&&j>0))){
                break;
            }
        }
        if(s[i][j]=='\0'){
            printf("yes\n");
        }else{printf("no\n");}
    }
    return 0;
}

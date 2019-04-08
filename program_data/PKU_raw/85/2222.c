char s[MLEN][MAX];
int i,j,n;
int main(){
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        scanf("%s",s[i]);
    }
    for(i=0;i<=n-1;i++){
        int a=1;
        for(j=0;s[i][j]!='\0';j++){
            if(!((s[i][j]=='_')||(s[i][j]>='A'&&s[i][j]<='Z')||(s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]>='0'&&s[i][j]<='9'&&j>0))){
                a=0;
                break;
            }
        }
        if(a==1){
            printf("yes\n");
        }else if(a==0){
            printf("no\n");
        }
    }
}
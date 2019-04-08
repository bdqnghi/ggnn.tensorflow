
int main(){
    int n,i,j;
    char word[53][35],del[53][35];
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%s",word[i]);
        if(word[i][strlen(word[i])-1]=='r'){
            for(j=0;j<strlen(word[i])-2;j++)
                del[i][j]=word[i][j];
        }else
        if(word[i][strlen(word[i])-1]=='y'){
            for(j=0;j<strlen(word[i])-2;j++)
                del[i][j]=word[i][j];
        }else
        if(word[i][strlen(word[i])-1]=='g'){
            for(j=0;j<strlen(word[i])-3;j++)
                del[i][j]=word[i][j];
        }
    }
    
    for(i=0;i<n;i++)
        puts(del[i]);
    
    return 0;
}

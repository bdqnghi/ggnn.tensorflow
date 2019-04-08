int main(){
    int n,l;
    scanf("%d",&n);
    char bg[60][40];
    for(int i=0;i<n;i++){
        scanf("%s",bg[i]);
    }
    for(int i=0;i<n;i++){
        l=strlen(bg[i]);
        if(strcmp(&bg[i][l-3],"ing")==0){
            bg[i][l-3]='\0';
        }else if(strcmp(&bg[i][l-2],"er")==0||strcmp(&bg[i][l-2],"ly")==0){
            bg[i][l-2]='\0';
        }
    }
    for(int i=0;i<n;i++){
    printf("%s\n",bg[i]);
    }
    return 0;
}

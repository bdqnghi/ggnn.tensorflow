int main(){
    int n;
    int m=0;
    int j=0;
    char zfc[202];
    char mb[202];
    gets(zfc);
    n=strlen(zfc);
    for(int i=0;i<n;i++){
        if(!(zfc[i]==' '&&zfc[i+1]==' ')){
             mb[j]=zfc[i];
             j++;
        }
    }
    mb[j]='\0';
    printf("%s",mb);
    return 0;
}
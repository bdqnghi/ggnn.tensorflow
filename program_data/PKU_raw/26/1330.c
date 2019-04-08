int main(){
    char sz[101],sz2[101];
    int i,k=0,m;
    gets(sz);
     m = strlen(sz);
    for(i=0;i<=m;i++){
        if(!(sz[i]==' '&&sz[i+1]==' ')){
            sz2[k++]=sz[i];
        }
    }
    sz2[k]='\0';
    puts(sz2);
    return 0;
}


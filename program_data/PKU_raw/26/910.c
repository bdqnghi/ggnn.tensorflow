int main(){
    char s[100];
    int i,n;
    gets(s);
    n=strlen(s);
    for(i=0;i<n;i++){
                     if(!(s[i]==' ')){
                                printf("%c",s[i]);
                     }else if(!(s[i+1]==' ')){
                           printf(" ");
                     }
    }
    return 0;
}
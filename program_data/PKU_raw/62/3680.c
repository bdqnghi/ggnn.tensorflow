int main(){
    char a[201], b[201];
    int m, n=0, len;
    gets(a);
    len=strlen(a);
    for(m=0;m<len;m++){
        if(a[m]==' '&&a[m+1]==' '){}else{
            b[n]=a[m];
            n++;
        }
    }
    b[n]='\0';
    printf("%s", b);
    return 0;
}


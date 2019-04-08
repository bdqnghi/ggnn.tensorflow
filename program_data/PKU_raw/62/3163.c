int main(){
    char a[300];
    gets(a);
    int i,j;
    int LEN;
    for(i=0,j=0;j<strlen(a);i++,j++){
        while(a[j]==' ' && a[j+1]==' ')
        j++;
        a[i]=a[j];
        LEN=i;
    }
    a[LEN+1]='\0';
    printf("%s",a);
    return 0;
}


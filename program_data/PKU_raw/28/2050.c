int main (){
    char zfc[10000];
    int i,n=0,a[300],m=0;
    gets(zfc);
    for(i=0;zfc[i]!='\0';i++){
        if(zfc[i]!=' '&&zfc[i+1]!='\0'){
            m+=1;
        }else if(zfc[i]==' '&&zfc[i-1]!=' '){
            a[n]=m;
            n+=1;
            m=0;
        }else if(zfc[i]==' '&&zfc[i-1]==' '){
            continue;
        }else if(zfc[i+1]=='\0'){
            a[n]=m+1;
        }
    }
    for(i=0;i<=n;i++){
        if(i<n){
        printf("%d,",a[i]);
        }else if(i==n){
            printf("%d",a[n]);
        }
    }
    return 0;
}


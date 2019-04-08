int main(){
    char a[200],b[200];
    int i,j=0,p;
    gets(a);
    for(i=0;a[i]!='\0';i++){
    if(a[i]!=' '){
        b[j]=a[i];
        j=j+1;
        p=0;
     }
    if((a[i]==' ')&&p==0){
        b[j]=a[i];
        j=j+1;
        p=1;
    }
    }
    b[j]=0;
    printf("%s",b);
return 0;
}




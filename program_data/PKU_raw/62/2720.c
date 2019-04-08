int main(){
    int i,k=0;
    char a[100],b[100]={'\0'};
    gets(a);
    b[0]=a[0];
    for(i=1;a[i]!='\0';i++){
        if((a[i]==' ')&&(a[i-1]==' ')){
            ;
        }else{
            k++;
        }
        b[k]=a[i];
    }
    puts(b);
    return 0;
}
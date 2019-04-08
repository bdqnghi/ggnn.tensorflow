int main(){
    char a[101];
    int i,j,n;
    gets(a);
    n=strlen(a);
    i=0;
    while(i<n){
        if(a[i]==' '&&a[i+1]==' '){
            for(j=i+1;j<n+1;j++){
                a[j-1]=a[j];
            }i=i;
        }else{
            i++;
        }
    }
    puts(a);
    return 0;
}

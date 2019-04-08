int main(){
    int i,j,k;
    char a[100],b[100];
    j=0;
    gets(a);
    k=strlen(a);
    for(i=0;i<k;i++){
        if(a[i]!=' '){
            b[j]=a[i];
            j++;
        }
        else if(a[i]==' '&&a[i+1]==' '){
            j=j;
        }
        else if(a[i]==' '&&a[i+1]!=' '){
            b[j]=a[i];
            j++;
        }
    }
    b[j]=0;
    puts(b);
    return 0;
}

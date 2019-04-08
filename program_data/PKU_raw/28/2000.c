int main(){
    char sz[1000];
    int c[300];
    gets(sz);
    int i;
    int k,j;
    k=0;
    j=0;
    int n;
    n=strlen(sz);
    for (i=0;i<n;i++){
        if(sz[i]!=' '){
            k++;
        }
        else {
            c[j]=k;
            if (k!=0){
            j++;}
            k=0;
        }
    }
    c[j]=k;
    for (i=0;i<j;i++){
        printf("%d,",c[i]);
    }
    printf("%d",c[j]);
return 0;
}


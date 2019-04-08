int main()
{
    char a[256],b[10000][256];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",a);
        for(j=0;a[j]!='\0';j++){
            if(a[j]=='A'){
                a[j]='T';
            }else if(a[j]=='T'){
                a[j]='A';
            }else if(a[j]=='C'){
                a[j]='G';
            }else if(a[j]=='G'){
                a[j]='C';
            }
        }
        strcpy(b[i],a);
    }
    for(i=0;i<n;i++){
        puts(b[i]);
    }
    return 0;
}

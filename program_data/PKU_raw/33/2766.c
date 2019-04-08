int main()
{
    int n,m,i,j;
    char s[256];
    scanf("%d",&n);
    scanf("\n");
    for(i=0;i<n;i++){
        scanf("%s",&s);
        scanf("\n");
        m=strlen(s);
        for(j=0;j<m;j++){
            if(s[j]=='A'){
                s[j]='T';
                continue;
            }
            else if(s[j]=='T'){
                s[j]='A';
                continue;
            }
            else if(s[j]=='C'){
                s[j]='G';
                continue;
            }
            else if(s[j]=='G'){
                s[j]='C';
                continue;
            }
        }
        printf("%s",s);
        printf("\n");
    }
    return 0;
}

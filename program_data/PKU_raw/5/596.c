int main()
{
    int i;
    double n,j=0;
    scanf("%lf\n",&n);
    char a[501],b[501];
    scanf("%s\n",a);
    scanf("%s\n",b);
    if(strlen(a)!=strlen(b)){
        printf("error");
    }else{
    for(i=0;a[i]!='\0';i++){
        if((b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G')&&(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')){
        if(a[i]==b[i]){
            j++;
        }
    }else{
        printf("error");
        return 0;
    }
    }
    i=strlen(a);
    j=j/i;
    if(j>n){
        printf("yes");
    }else{
        printf("no");
    }
    }
    return 0;
}




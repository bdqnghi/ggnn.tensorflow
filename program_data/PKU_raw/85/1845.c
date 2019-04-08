int main(){
    char a[100];
    int i,j,k,l,n,m[100],o,p;
    scanf("%d",&n);
    for(j=0;j<n;j++){
    scanf("%s",a);
    p=strlen(a);
    o=0;
    for(i=0;i<p;i++)
    if(((a[i]<=57&&a[i]>=48)||(a[i]<=90&&a[i]>=65)||(a[i]<=122&&a[i]>=97)||(a[i]==95))&&(a[0]>57||a[0]<48));
    else
    o=1;
    
    m[j]=o;
    }
    
    for(j=0;j<n;j++)
    if(m[j]==1)
    printf("no\n");
    else
    printf("yes\n");
    return 0;
}
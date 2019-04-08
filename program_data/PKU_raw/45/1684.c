int main()
{
    int i,j,k;
    char a[50];
    gets(a);
    for(i=0;i<50&&a[i]!='\0';i++){
        if(a[i]==' ')
        j=i;}
    for(i=j+1;i<strlen(a);i++){
        if(a[i]==a[0]){
        k=i;break;}}
   printf("%d",k-j-1);
   return 0;
}
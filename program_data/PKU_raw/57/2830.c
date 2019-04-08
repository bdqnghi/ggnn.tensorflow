int main()
{
    char wd[50][15];
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%s",wd[i]);
       }
    for(i=0;i<n;i++){
       for(j=0;wd[i][j]!='\0';j++){}
       if(wd[i][j-1]=='g'){
         wd[i][j-3]='\0';
         }
       else{wd[i][j-2]='\0';}
       }
    for(i=0;i<n;i++){
       printf("%s\n",wd[i]);
       }
    int a;
    scanf("%d",&a);
    return 0;
}

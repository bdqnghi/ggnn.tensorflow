int main()
{
    char s[100],re[100],x[100],wd[50][100];
    int n,i,a=0,j=0,k,e,l,nc[100];
    gets(s);
    scanf("%s",re);
    scanf("%s",x);
    for(i=0;s[i]!='\0';i++){
       if(s[i]!=' '){
         wd[a][j]=s[i];
         j++;}
       if(s[i]==' '&&s[i+1]!=' '){
         nc[a]=i;
         wd[a][j]='\0';
         a++;
         j=0;}
       }
    l=strlen(s)-nc[a-1];
    wd[a][l-1]='\0';
    for(i=0;i<=a;i++){
       if(strcmp(re,wd[i])==0){
         strcpy(wd[i],x);}
    }
    for(i=0;i<a;i++){
       printf("%s ",wd[i]);
       }
    printf("%s",wd[a]);
       return 0;
}

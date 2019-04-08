int main()
{
    int i,j=0,n=0,l;
    char sen[101],nsen[101];
    gets(sen);
    l=strlen(sen);
    for(i=0;i<=l;i++){
        if(sen[i]!=' '||(n==0&&sen[i]==' ')||i==l){
          nsen[j]=sen[i];           
          j++;
          } 
        if(sen[i]==' ')
           n++;
        if(sen[i]!=' ')
           n=0;
        }
    puts(nsen);
    return 0;
}

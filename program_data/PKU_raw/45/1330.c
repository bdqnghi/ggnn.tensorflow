int main()
{
    char s1[50],s2[50];
    int n,i,j,f;
    scanf("%s",s1);
    scanf("%s",s2);
    n=strlen(s1)-1;
    for(i=0;s2[i]!='\0';i++){
       if(s2[i]==s1[0]){
       f=0;
         for(j=0;j<=n-1;j++){
            if(s1[j]!=s2[i+j])  f=1;
            }
       if(f==0){
          printf("%d",i);
          break;
          }
          }
          }
       return 0;
}


int main()
{
    int n;
    scanf("%d",&n);
    int i,k,j,m,o;
    char s[82];
    getchar();
    for(i=0;i<n;i++)
    {
    gets(s);
    for(j=0;;j++)
    {
                 if(s[j]=='\0')
                 {
                               printf("1\n");
                               break;
                 }
                 if(j==0)
                 {
                         for(k=0;k<26;k++)
                         {
                                          if((s[j]=='a'+k)||(s[j]=='A'+k)||s[j]=='_')
                                          {
                                                                         break;
                                          }
                         }
                         if(k==26)
                         {
                                                             printf("0\n");                                                                                     
                                                             break;
                         }
                 }
                 if(j!=0)
                 {
                         for(k=0;k<26;k++)
                         {
                                          if((s[j]=='a'+k)||(s[j]=='A'+k)||s[j]=='_'||s[j]=='0'||s[j]=='1'||s[j]=='2'||s[j]=='3'||s[j]=='4'||s[j]=='5'||s[j]=='6'||s[j]=='7'||s[j]=='8'||s[j]=='9')
                                          {
                                                                         break;
                                          }
                                          }
                         if(k==26)
                         {
                                    printf("0\n");
                                    break;
                         }
                 }
                 
    }
    }
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    
}
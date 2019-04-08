int main()
{
    int n,i,l,x,maxnumber;
    scanf("%d",&n);
    int a[1000];
    char k[1000][30]; 
    int author[27]={0};
    for(i=1;i<=n;i++)
    {
                      scanf("%d %s",&a[i],k[i]);
                      int m;
                      m=strlen(k[i]);
                      for(l=0;l<30;l++)
                      {
                                        for(x=1;x<=26;x++)
                                        {
                                                          if(k[i][l]==x+64)
                                                          author[x]++;
                                        }
                      }
    }
    int max=0;
    for(i=1;i<=26;i++)
    {
                      if(author[i]>max)
                      max=author[i];
    } 
    for(i=1;i<=26;i++)
    {
                      if(author[i]==max)
                      maxnumber=i;
    } 
    char who[10];
    who[0]='A'+maxnumber-1 ;
    printf("%c\n",who[0]);
    printf("%d\n",max);
    for(i=1;i<=n;i++)
    {
                     for(l=0;l<=strlen(k[i]);l++)
                     if(k[i][l]==who[0])
                     printf("%d\n",a[i]);
    }
    return 0; 
}  

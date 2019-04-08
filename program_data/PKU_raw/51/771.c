int main()
{   
    int n=0,i=0,j=0,k=0;
    char str[500]={'0'};
    scanf("%d",&n);
    scanf("%s",str);
    int len=0,max=0,num[500]={0},a[100]={0};
    len=strlen(str);
    for(i=0;i<len-n+1;i++)
    {
                      for(j=i+1;j<len-n+1;j++)
                      {
                                        for(k=0;k<n;)
                                        {
                                                     if(str[i+k]==str[j+k]) k++;
                                                     else break;
                                        }
                                        if(k==n) num[i]++;
                      } 
    }
    k=0;
    for(i=0;i<len-n+1;i++)
    {
                          if(num[i]>max)
                          {
                                        k=0;
                                        memset(a,0,sizeof(a));
                                        max=num[i];
                                        a[k]=i;
                                        k++; 
                          }
                          else if(num[i]==max)
                          {
                               a[k]=i;
                               k++;
                          } 
    }
    if(num[a[0]]==0) printf("NO\n");
    else
    {
        printf("%d\n",num[a[0]]+1);
        i=0;
        do
        {
                             for(j=a[i];j<a[i]+n-1;j++)
                                                     printf("%c",str[j]);
                             printf("%c\n",str[j]);
                             i++;
        } while(a[i]!=0);
    }              
    return 0;
}

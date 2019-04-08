int main()
{
    int i,n,sum=0,length[1000];
    char word[1000][50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%s",word[i]);
                    length[i]=strlen(word[i]);
    }
    for(i=0;i<n-1;i++)
    {
                    if(sum+length[i]<=80)
                    {
                                         if(sum+length[i]+length[i+1]+1<=80)
                                         {
                                                                            printf("%s ",word[i]);
                                                                            sum+=length[i]+1;
                                         }
                                         else
                                         {
                                             printf("%s\n", word[i]);
                                             sum=0;
                                         }
                                         
                    }                                         
                    
    }
    printf("%s", word[n-1]);
    return 0;
}
    
    
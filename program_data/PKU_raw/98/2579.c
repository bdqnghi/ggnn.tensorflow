main()
{
    char word[41];
    int sum=0,n,t;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        scanf("%s",word);
        if((sum+strlen(word)+1<=80)&&n!=t)
        {
            printf(" ");
            sum++;
        }
        else
        {
            printf("\n");sum=0;
        }
        sum=sum+strlen(word);
        printf("%s",word);
        memset(word,0,sizeof(word));
        n--;
    }
}

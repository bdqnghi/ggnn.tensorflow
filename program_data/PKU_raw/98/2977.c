main()
{
    int n;
    scanf("%d",&n);
    char word[n][41];
    for(int i=0;i<n;i++)
    {
        scanf("%s",word[i]);
    }
    int l=0;
    for(int i=0;i<n;i++)
    {
        if(l==0)
        {
            printf("%s",word[i]);
            l+=strlen(word[i]);
        }
        else
        {
            l+=strlen(word[i])+1;
            if(l<81)
                printf(" %s",word[i]);
            else
            {
                printf("\n");
                l=0;
                i--;
            }
        }
    }
}

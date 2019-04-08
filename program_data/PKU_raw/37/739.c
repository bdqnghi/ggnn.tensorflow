main()
{
    char a[100000];
    int i,j,n,sum;
    sum=0;
    scanf("%d",&n);
    for(;n>0;n--)
    {
        scanf("%s",a);
        for(i=0;a[i]!='\0';i++)
        {
            for(j=0;a[j]!='\0';j++)
            {
                if(a[j]==a[i]&&j!=i)
                {
                sum=sum+1;
                break;
                }
            }
            if(sum==0)
                {
                    sum=2;
                    break;
                }
            sum=0;
        }
        if(sum==2) printf("%c",a[i]);
        else printf("no");
        printf("\n");
        sum=0;
    }
}
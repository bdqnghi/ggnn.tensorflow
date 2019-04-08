main()
{
    int n,i,j,k,s;
    int a[300];
    scanf("%d",&n);
    scanf("%d",&a[0]);
    for(i=1;(getchar())!='\n';i++)
    {
        scanf(" %d",&s);
        a[i]=s;
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                i--;
                break;
            }
        }
    }
    printf("%d",a[0]);
    for(j=1;j<i;j++)
    printf(",%d",a[j]);
    return 0;
}

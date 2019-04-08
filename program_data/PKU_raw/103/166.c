main()
{
    char a[1000];
    gets (a);
    int temp=1;
    int i;
    for (i=0;i<=strlen(a)-1;i++)
        if (((a[i]>='a')&&(a[i]<='z')))
        {a[i]+='A'-'a';}
    if(strlen(a)==1)
    printf("(%c,%d)",a[0],1);
    else
    {
    for (i=1;i<=strlen(a)-1;i++)
    {
        if (a[i]==a[i-1])
        temp++;
        else
        {
            printf("(%c,%d)",a[i-1],temp);
            temp=1;
        }
        if (a[i+1]==0)
            printf("(%c,%d)",a[i],temp);
    }
    }
    return 0;
}

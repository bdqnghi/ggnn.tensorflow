int main()
{
    int a[20000],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",a[0]);
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {j=i;}
            else
            {j=j;}

        }
        if(j==i)
        printf(",%d",a[i]);
    }
    return 0;
}
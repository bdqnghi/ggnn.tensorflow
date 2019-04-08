int main()
{
    int k,b[25],a[25],c,i,j;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=1;i<k;i++)
    {
        a[0]=1;
        c=1;
        for(j=0;j<i;j++)
        {
            if(b[i]<b[j])
            {
                if(a[j]>c)
                {
                    c=a[j];
                }
            }
        }
        a[i]=c+1;
    }
    c=0;
    for(i=0;i<k;i++)
    {
        if(a[i]>c)
        {
            c=a[i];
        }
    }
    printf("%d",c);
    return 0;
}

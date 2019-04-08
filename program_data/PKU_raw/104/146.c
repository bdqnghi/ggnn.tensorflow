int main()
{
    int x,y,i,j,p=0;
    int a[1000],b[1000];
    scanf("%d%d",&x,&y);
    a[0]=x,b[0]=y;
    for(i=1;i<1000;i++)
    {
        if(a[i-1]>1)
        a[i]=a[i-1]/2;
        if(a[i-1]==1)
        break;
    }
    for(i=1;i<1000;i++)
    {
        if(b[i-1]>1)
        b[i]=b[i-1]/2;
        if(b[i-1]==1)
        break;
    }
    for(i=0;i<1000;i++)
    {
        for(j=0;j<1000;j++)
        {

            if(a[i]==b[j])
            {
                printf("%d\n",a[i]);
                p=1;
                break;
            }
            if(j==1000)
            break;
           /* if(a[i]==b[i])
        {
            printf("%d\n",a[i]);
            break;*/
        }
        if(p==1)
        break;
    }
    return 0;
}

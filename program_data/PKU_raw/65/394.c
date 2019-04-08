main()
{
    int n,a[200],b[200];
    int i,x=0,y=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            if(a[i]==0&&b[i]==1)
            x+=1;
            else if(a[i]==1&&b[i]==2)
            x+=1;
            else if(a[i]==2&&b[i]==0)
            x+=1;
            else
            y+=1;
        }
    }
    if(x>y) printf("A");
    else if(x<y) printf("B");
    else printf("Tie");        
}
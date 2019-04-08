int main()
{

    int n,i;
    int x,y,z;
    x=0;
    y=0;
    z=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
      scanf("%d%d",&a[i],&b[i]);
        if(a[i]==b[i])
        z++;
        else if((a[i]==0 && b[i]==1)||(a[i]==1 && b[i]==2)||(a[i]==2 && b[i]==0))
        x++;
        else
        y++;
    }
    if(x<y)
    printf("B");
    else if(x==y)
    printf("Tie");
    else
    printf("A");
    return 0;
}

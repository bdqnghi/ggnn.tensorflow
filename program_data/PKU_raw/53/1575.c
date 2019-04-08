int main()
{
    int a[300]={0},t,j,s,i,n;
    scanf("%d",&n);
    s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        j=0;
        while(a[j]!=t&&j<s)
        j=j+1;
        if(j>=s)
        {a[s++]=t;}
    }
    printf("%d",a[0]);
    for(i=1;i<s;i++)
    printf(",%d",a[i]);
    return 0;
}

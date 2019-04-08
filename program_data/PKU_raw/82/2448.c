int main()
{
    int n;
    scanf("%d",&n);
    int sz[n][2];
    int k=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&sz[i][0],&sz[i][1]);
        if(sz[i][0]<=140&&sz[i][0]>=90&&sz[i][1]<=90&&sz[i][1]>=60)
        {
            sum++;
        }
        else 
        {
            if(k<sum)
            {
                k=sum;  
            }
            sum=0;
        }
    }
    if(sum>k)printf("%d",sum);
    else printf("%d",k);
    return 0;
}
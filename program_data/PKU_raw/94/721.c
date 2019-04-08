

int main()
{
    int N,i,j=0,k,sz[500],result[500],e;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&sz[i]);
        if(sz[i]%2==1)
        {
            result[j]=sz[i];
            j++;
        }
    }
    for(k=1;k<=j;k++)
    {
        for(i=0;i<j-k;i++)
        {
            if(result[i]>result[i+1])
            {
                e=result[i+1];
                result[i+1]=result[i];
                result[i]=e;
            }
        }
    }
    for(i=0;i<j-1;i++) printf("%d,",result[i]);
    printf("%d",result[j-1]);
    return 0;
}
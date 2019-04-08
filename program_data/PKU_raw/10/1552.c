struct daodan
{
    int height;
    int number;
};
int compare(const void* a,const void* b)
{
    struct daodan* x=(struct daodan*)a;
    struct daodan* y=(struct daodan*)b;
    return (((*y).number)-((*x).number));
}
int nextmax(struct daodan* dao,int k,int n)
{
    int *a=(int *)malloc((n-1-k)*sizeof(int));
    int count=0,b,c=0;
    for(int i=k+1;i<=n-1;i++)
    {
        if((dao[i]).height<=(dao[k]).height)
        {
            a[count]=dao[i].number;
            count++;
        }
        /*else if((dao[i].height)==dao[k].height)
        {
            b=dao[i].number;
            c++;
        }
        */
    }
    int max=0;
    for(int j=0;j<=count-1;j++)
    {
        if(a[j]>max)
        {
            max=a[j];
        }
    }
    /*if(max==b)
    {
        return max+c;
    }
    else
    {
        return max;
    }
    */
    return max;
}
int main()
{
    int n;
    scanf("%d",&n);
    struct daodan* dao=(struct daodan*)malloc(n*sizeof(struct daodan));
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&dao[i].height);
    }
    for(int j=0;j<=n-1;j++)
    {
        dao[j].number=1;
    }
    for(int k=n-2;k>=0;k--)
    {
        dao[k].number=nextmax(dao,k,n)+1;
    }
    int max=dao[0].number;
    for(int l=1;l<=n-1;l++)
    {
        if(dao[l].number>max)
        {
            max=dao[l].number;
        }
    }
    printf("%d",max);
}

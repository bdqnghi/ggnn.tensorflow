struct missile
{
    int num;
    int high;
};
struct missile a[25];
void f(int n,int sum);
int main()
{
    int i=0,j=0,sum=0,max=0;
    scanf("%d",&sum);
    //a=(struct missile*)malloc(sum*sizeof(struct missile));
    for(i=0;i<=sum-1;i++)       //read in
    {
        scanf("%d",&a[i].high);
    }
    for(i=sum-1;i>=0;i--)       //find num
    {
        f(i,sum);
    }
    for(i=0;i<=sum-1;i++)       //find max
    {
        if(a[i].num>max){max=a[i].num;}
    }
    printf("%d",max);
}
void f(int n,int sum)
{
    int i=0,t=1;//a[n].num???1?
    if(n==sum-1)
    {a[n].num=1;}
    else
    {
        a[n].num=1;
        for(i=n+1;i<=sum-1;i++)
        {
            if(a[n].high>=a[i].high)
            {
                if(a[i].num+1>a[n].num)
                {a[n].num=a[i].num+1;}      //??????  .XXX
            }
        }
    }
}

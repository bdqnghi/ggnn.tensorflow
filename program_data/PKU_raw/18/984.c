

int array[100][100];
int (*p)[100]=array;
int sum;
int n;
int times;

void zero()
{
    int xmin=10000,ymin=10000;
    for(int i=0;i<=n-1-times;i++)
    {
        for(int j=0;j<=n-1-times;j++)
        if(*(*(p+i)+j)<xmin)
        {
            xmin=*(*(p+i)+j);
        }
        for(int j=0;j<=n-1-times;j++)
        *(*(p+i)+j)-=xmin;
        xmin=10000;
    }
    for(int j=0;j<=n-1-times;j++)
    {
        for(int i=0;i<=n-1-times;i++)
        if(*(*(p+i)+j)<ymin)
        {
            ymin=*(*(p+i)+j);
        }
        for(int i=0;i<=n-1-times;i++)
        *(*(p+i)+j)-=ymin;
        ymin=10000;
    }

    sum+=(*(*(p+1)+1));
}
void decline()
{
    for(int i=1;i<=n-2;i++)
    for(int j=0;j<=n-1;j++)
    *(*(p+i)+j)=*(*(p+i+1)+j);

    for(int j=1;j<=n-2;j++)
    for(int i=0;i<=n-2;i++)
    *(*(p+i)+j)=*(*(p+i)+j+1);
}

int main()
{
    cin>>n;
    int time=0;
    while(true)
    {
        
    if(time==n)break;
    times=0;
    sum=0;

    for(int i=0;i<=n-1;i++)
    for(int j=0;j<=n-1;j++)
    cin>>*(*(p+i)+j);

    for(int i=1;i<=n-1;i++)
    {
        zero();
        decline();
        times++;
    }

    cout<<sum<<endl;

    time++;
    
    }
    return 0;
}

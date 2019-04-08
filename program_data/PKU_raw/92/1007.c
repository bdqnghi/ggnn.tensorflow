
void Sort(int *sz, int n)
{
    int e, k, i;
    for(k=1;k<n;k++)
    {
        for(i=0;i<n-k;i++)
        {
            if(sz[i]<sz[i+1])
            {
                e=sz[i+1];
                sz[i+1]=sz[i];
                sz[i]=e;
            }
        }
    }
}

int main()
{
    int i, j, t, k, m, n, sum, king[1000], tian[1000];

    scanf("%d", &n);
    while(n!=0)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d", (tian+i));
        }

        for(i=0;i<n;i++)
        {
            scanf("%d", (king+i));
        }

        Sort(tian,n);
        Sort(king,n);

        sum=0; t=0; k=0;

        for(m=0;m<n;m++)
        {
            if(*(tian+t)>*(king+k))
            {
                sum+=200;
                t++;
                k++;
            }else if(*(tian+t)<*(king+k)){
                sum-=200;
                k++;
            }else{
                for(j=k-t+1;j<n-t+1;j++)
                {
                    if(*(tian+n-j)<=*(king+n+k-t-j)&&*(tian+n-j)<*(king+k))
                    {
                        sum-=200;
                        t--;
                        break;
                    }
                }
                t++;
                k++;
            }
        }
        printf("%d\n", sum);
        scanf("%d", &n);
    }

    return 0;
}
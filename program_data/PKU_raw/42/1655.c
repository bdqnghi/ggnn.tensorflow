
int main()
{
    int n,x;
    int a[N];
    int i,j,num;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&x);

    for(i=0,num=0;i<n-num;i++)
    {
        if(a[i]==x)
        {
            if(i==n-1-num)
            {
                num++;
            }
            else
            {
              for(j=i;j<n-num-1;j++)
              {
                a[j]=a[j+1];
              }
              i--;
              num++;
            }
        }
    }

    for(i=0;i<n-num;i++)
    {
        if(i==0)
        {
            printf("%d",a[i]);
        }
        else
        {
            printf(" %d",a[i]);
        }
    }

    return 0;
}

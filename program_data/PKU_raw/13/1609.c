
int main()
{
    int n;
    int a[N];
    int i,j;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("%d",a[i]);
        }

        else
        {
            for(j=0;j<i;j++)
            {
                if(a[j]==a[i])
                {
                    break;
                }
            }
            if(j==i)
            {
                printf(" %d",a[i]);
            }
            else if(j<i)
            {
                continue;
            }
        }
    }

    return 0;
}

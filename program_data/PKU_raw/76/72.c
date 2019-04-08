
int main()
{
    int a[N],b[N];
    int n;
    int i,j,t;
    int flag;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }

    for(j=0;j<n-1;j++)
    {
        for(i=0;i<n-j-1;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
                t=b[i];
                b[i]=b[i+1];
                b[i+1]=t;
            }
        }
    }


    for(i=0,flag=1;i<n;i++)
    {
        if(i==0)
        {
            continue;
        }

        else if(a[i]==a[i-1])
        {
            if(b[i]>=b[i-1])
            {
            }
            else if(b[i]<b[i-1])
            {
                b[i]=b[i-1];
            }
        }
        else if(a[i]<=b[i-1])
        {
            a[i]=a[i-1];
            if(b[i]>=b[i-1])
            {
            }
            else if(b[i]<b[i-1])
            {
                b[i]=b[i-1];
            }
        }
        else if(a[i]>b[i-1])
        {
            flag=0;
            break;
        }
    }

    if(flag==0)
    {
        printf("no\n");
    }
    else if(flag==1)
    {
        printf("%d %d\n",a[n-1],b[n-1]);
    }

    return 0;
}
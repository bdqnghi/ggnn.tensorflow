
int main()
{
    int n,m,x,t;
    int a[N];
    int i,j;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        a[i]=0;
        t=0;
        for(j=0;j<m;j++)
        {
            scanf("%d",&x);
            x=x-a[i];
            if(t+x>=60)
            {
                a[i]=a[i]+60-t;
                t=60;
            }
            else if(t+x<60&&t+x+3>=60)
            {
                t=60;
                a[i]=a[i]+x;
            }
            else if(t+x+3<60)
            {
                t=t+x+3;
                a[i]=a[i]+x;
            }

        }

        a[i]=a[i]+(60-t);
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}

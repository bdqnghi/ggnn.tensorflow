int main()
{
    int max,imax;
    int n,i=1,a[310];
    char c;
    scanf("%d",&a[0]);
    while((c=getchar())==',')
    {
        scanf("%d",&a[i]);
        i++;
    }
    n=i;
    if(n==1) printf("No");
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]!=a[0]) break;
        }
        if(i==n) printf("No");
        else
        {
            max=0;
            for(i=1;i<n;i++)
            {
                if(a[i]<a[max])
                {
                    imax=i;
                    break;
                }
                else if(a[i]>a[max])
                {
                    imax=max;
                    max=i;
                    break;
                }
            }
            for(;i<n;i++)
            {
                if(a[i]>a[max])
                {
                    imax=max;
                    max=i;
                }
                else if(a[i]<a[max]&&a[i]>a[imax])
                {
                    imax=i;
                }
            }
            printf("%d",a[imax]);
        }
    }
}

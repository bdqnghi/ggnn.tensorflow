int c;
int main()
{
    int *p,*q,*z;
    int n,i,j,sum=0,d,m=0;
    scanf("%d",&n);
    p=(int*)malloc(10*n*sizeof(int));
    q=(int*)malloc(10*n*sizeof(int));
    z=(int*)malloc(10*n*sizeof(int));
    for(i=0;;i++)
    {
        scanf("%d %d",&p[i],&q[i]);
        if(p[i]==0&&q[i]==0)
        break;

    }
    sum=i;
    for(i=0;i<n;i++)
    z[i]=i;
    for(i=0;i<n;i++)
    {
        d=0;
        for(j=0;j<sum;j++)
        {
            if(z[i]==p[j])
            break;
            else if(z[i]==q[j])
            d=d+1;
        }

        if(d==(n-1))
        {
            printf("%d",z[i]);
        }
        else
        {
            m=m+1;
        }


    }
   


}
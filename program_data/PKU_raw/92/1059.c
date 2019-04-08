int main()
{
    int i,j,n,t;
    int a[1001]={0},b[1001]={0},l[1001][1001]={0};
    do
    {
        scanf("%d",&n);
        if(n==0) break;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            scanf("%d",&b[i]);
        for(i=0,t=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(a[j]<a[j+1])
                {
                    t=a[j+1];
                    a[j+1]=a[j];
                    a[j]=t;
                }
            }
        }
        for(i=0,t=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(b[j]<b[j+1])
                {
                    t=b[j+1];
                    b[j+1]=b[j];
                    b[j]=t;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(b[i]<a[0])
               l[i][0]=200;
            else if(b[i]==a[0])
               l[i][0]=0;
            else
               l[i][0]=-200;
        }
        for(i=n-2;i>=0;i--)
        {
            for(j=1;j<n-i;j++)
            {
                if(b[i+j]<a[j])
                   l[i][j]=l[i][j-1]+200;
                else if(b[i+j]>a[j])
                   l[i][j]=l[i+1][j-1]-200;
                else if(l[i+1][j-1]-200>l[i][j-1])
                   l[i][j]=l[i+1][j-1]-200;
                else
                   l[i][j]=l[i][j-1];
            }
        }
        printf("%d\n",l[0][n-1]);
    }
    while(n!=0);
    getchar();
    getchar();
}
int main ()
{
    int n;
    scanf("%d",&n);
    int a[25];
    int i,j,k;
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    int t[25];
    //int c[25];
    int min_c,max_t=1;
    for (j=n-1;j>=0;j--)
    {
        if (j==n-1)
            t[j]=1;
        /*else if (j==n-2)
        {
             if (a[n-2]>a[n-1])
                 t[j]=t[j+1]+1;
             else
                 t[j]=1;     
        }*/
        else
        {
            /*for (k=j;k<n-1;k++)
            {
                if (a[j]>=a[k+1])
                    c[k+1]=a[j]-a[k+1];
                else
                    c[k+1]=3000;    
            }
            min_c=c[j+1];*/
            max_t=0;
            for (k=j;k<n-1;k++)
            {
                if(a[j]>=a[k+1]&&max_t<t[k+1])
                {
                	max_t=t[k+1];
                }
            }
            t[j]=max_t+1;
        }    
    }
    max_t=1;
    for (j=n-1;j>=0;j--)
        {
             if(t[j]>max_t)
                 max_t=t[j];
        }
    printf ("%d\n",max_t);
}
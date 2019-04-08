int main()
{
    int i,j,k,l,m,n,x,z,a[2000],b[2000];
    do
    {
        scanf("%d",&n);
        if(n!=0)
        {
            m=0;
            for(i=0;i<n;i++)
            {
                            scanf("%d",&a[i]);
            }
            for(i=0;i<n;i++)
            {
                            for(j=0;j<n-1;j++)
                            {
                                            if(a[j]<a[j+1])
                                            {
                                                           l=a[j];
                                                           a[j]=a[j+1];
                                                           a[j+1]=l;
                                            }
                            }
            }
            for(i=0;i<n;i++)
            {
                            scanf("%d",&b[i]);
            }
            for(i=0;i<n;i++)
            {
                            for(j=0;j<n-1;j++)
                            {
                                            if(b[j]<b[j+1])
                                            {
                                                           l=b[j];
                                                           b[j]=b[j+1];
                                                           b[j+1]=l;
                                            }
                            }
            }
            for(i=0;i<n;i++)
            {
                            x=-i;
                            for(j=0;j<(n-i);j++)
                            {
                                                if(a[j]>b[j+i]) x++;
                                                if(a[j]<b[j+i]) x--;
                            }
                            if(i==0) m=x;
                            if(x>m) m=x;
            }
            z=m*200;
            printf("%d\n",z);
        }
    }while(n!=0);
}

int main()
{
    int n,i,j,k,a[100][100][100],minh,minl,sum[100]={0};
    int minhang(int n,int k,int a[100][100]),minlie(int n,int k,int a[100][100]);
    int guilin(int n,int a[100][100]);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    for(k=0;k<n;k++)
                                    {
                                                    scanf("%d",&a[i][j][k]);
                                    }
                    }
    }
    for(i=0;i<n;i++)
    {
                    printf("%d\n",guilin(n,a[i]));
    }
    return 0;
}

int guilin(int n,int a[100][100])
{
    int i,j,k,sum=0,minh,minl;
    if(n==1) return 0;
    else 
    {
         for(j=0;j<n;j++)
         {
                         minh=minhang(n,j,a);
                         for(k=0;k<n;k++) a[j][k]-=minh;
         }
         for(j=0;j<n;j++)
         {
                         minl=minlie(n,j,a);
                         for(k=0;k<n;k++) a[k][j]-=minl;
         }
         sum+=a[1][1];
         for(j=0;j<n;j++)
         {
                         for(k=0;k<n;k++)
                         {
                                         if(j>1&&k>1) a[j-1][k-1]=a[j][k];
                                         else if(j>1&&k==0) a[j-1][k]=a[j][k];
                                         else if(j==0&&k>1) a[j][k-1]=a[j][k];
                                         else a[j][k]=a[j][k];
                         }
         }
         sum+=guilin(n-1,a);
         return (sum);
    }
}

minhang(int n,int k,int a[100][100])
{
            int min,i;
            min=a[k][0];
            for(i=0;i<n;i++)
            {
                            if(a[k][i]<min) min=a[k][i];
            }
            return (min);
}

minlie(int n,int k,int a[100][100])
{
           int min,i;
           min=a[0][k];
           for(i=0;i<n;i++)
           {
                           if(a[i][k]<min) min=a[i][k];
           }
           return (min);
}
int main()
{
    int n,i,j,z;
    float a[30],b[30],sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&z);
         a[0]=2.0;
         b[0]=1.0;
         sum=0;
         for(j=0;j<z;j++)
         {
             sum+=(float)(a[j]/b[j]);

             if(j==0) {a[j+1]=a[j]+1; b[j+1]=b[j]+1;}
             else {a[j+1]=a[j]+a[j-1];
                   b[j+1]=b[j]+b[j-1];   }
         }
         printf("%.3f\n",sum);
    }
    return 0;
}

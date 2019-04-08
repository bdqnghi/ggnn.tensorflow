int Max(int b[100],int n)
{
    int max=b[0];int i;
    for(i=0;i<n;i++)
    {
            if(b[i]>max)
            max=b[i];
    }
    return max;
}
int main()
{
    int k;
   scanf("%d",&k);
    int a[30],b[30]={0},d=0;
   for(int i=0;i<k;i++)
    {
    scanf("%d",&a[i]);
    }
    b[k-1]=1;
    int i,j;
    for(i=k-2;i>=0;i--)
    {
            int c[30]={0};
            d=0;
            for(j=i+1;j<k;j++) 
            {
            if(a[i]>=a[j])
            {
            c[d]=b[j];
            d++;
            }
            }
     b[i]=Max(c,d)+1;
     }
     int max=Max(b,k);
     printf("%d\n",max); 
}    
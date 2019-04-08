int main()
{
    int i,j,sum[25],a[25],b[25],k,max=1;
scanf("%d",&k);
for (i=0;i<k;i++)
scanf("%d",&a[i]);
for (i=0;i<k;i++)
sum[i]=1;
sum[k-1]=1;


for (i=k-1;i>=1;i--)

{
    for (j=i-1;j>=0;j--)
  { 
        if (sum[i]>=sum[j]&&a[j]>=a[i])
        sum[j]=sum[i]+1;
                      
   }

}
   for (i=0;i<k;i++)
  { if (sum[i]>max)
   max=sum[i];}
   printf("%d",max); 
    
    
    }

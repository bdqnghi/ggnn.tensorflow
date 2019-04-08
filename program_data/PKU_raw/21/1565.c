void main()
{
   int n,i,j,a[301],sum,t;
   float average;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   scanf("%d",&a[i]);
   for(sum=0,i=1;i<=n;i++)
   sum=sum+a[i];
   average=(float)sum/n;
   for(i=1;i<n;i++)
   for(j=i;j<n;j++)
   if(a[j]>a[j+1]){t=a[j];a[j]=a[j+1];a[j+1]=t;}
   if(average-a[1]>a[n]-average)printf("%d",a[1]);
   else if(average-a[1]<a[n]-average)printf("%d",a[n]);
   else printf("%d,%d",a[1],a[n]);
}
   
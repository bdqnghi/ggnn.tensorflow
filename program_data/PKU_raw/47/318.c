

int main()
{
 int a[100],b[100],n,i,j,f=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
     b[n-i-1]=a[i];
 }
 for(i=0;i<n;i++)
 {
     if(f==0)
     {
         printf("%d",b[i]);
         f=1;
     }
     else
     {
         printf(" %d",b[i]);
     }
 }
 printf("\n");
 return 0;
}

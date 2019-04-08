
int main()
{
 int a[1001];
 int n,k,i,j,q=0;
 scanf("%d %d",&n,&k);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n-1;i++)
 {
 for(j=n-1;j>i;j--)
 {
if(a[i]+a[j]==k)
 q=1;

 }
 


}
 if(q==1)
 printf("yes");
 else if(q==0)
     printf("no");
 return 0;
}
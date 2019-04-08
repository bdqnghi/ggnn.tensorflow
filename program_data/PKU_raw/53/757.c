int main()
{
 int i,n,j,a[300],b[300]={0},c[300]={0};
  scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  if(b[i]==0)
   {
     for(j=i+1;j<n;j++)
     if(a[j]==a[i])b[j]=1;
   }
   else continue;
 }
 for(i=0,j=0;i<n;i++)
 if(b[i]==0)c[j++]=a[i];
 for(i=0;i<j-1;i++)
 printf("%d,",c[i]);
 printf("%d",c[j-1]);

}


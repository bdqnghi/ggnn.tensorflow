int main()
{
int a[20000];
int n,i,j,s,k;
scanf("%d",&n);
for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
for(i=0;i<n;i++)
  {
     s=a[i];
     for(k=i+1;k<n;k++)
     {
       if(a[k]==s)
       {       
        for(j=k;j<n;j++)
        {
         a[j]=a[j+1];
        }
        n--;
        k--;        
       }
     }
   }
for(i=0;i<n;i++)
  {
   if(i>0)
   printf(" ");
   printf("%d",a[i]);
  }
return 0;
}

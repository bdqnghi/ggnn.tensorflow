void sort(int a[],int n)
{ int i,j,t;
  for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    if(a[i]<a[j])
  { t=a[i];a[i]=a[j];a[j]=t;}
  return;
}
int main()
{
   int a[1000],b[1000];int i,h,k,ans,t,s,n,j,m;
   for(k=1;k<=1000;k++)
{ scanf("%d",&n);
    if(n==0)break;
    else
   {
     t=n-1;s=n-1;
     for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    sort(a,n);
   for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    sort(b,n);
    h=0;ans=0;
   for(i=0;i<n;i++)
    { 
    if(a[h]>b[i])
     {
        ans+=200;
        h++;
     }
     else if(a[h]<b[i])
     {
          t--;
          ans-=200;
     }
     else if(a[h]==b[i])
     {    
          for(j=t,m=s;j>=h;j--,m--)
            { 
                  if(a[j]>b[m])
                      {
                         ans+=200;
                          t--;
                          s--;
                      } 
                  else
                  { if(a[j]<b[i]) 
                          ans-=200;
                           t=--j;
                           s=m;
                           break;
                  }
           }   
     }  
    if(h>t)
      break; 
   } 
  }
   printf("%d\n",ans);
}
   getchar();getchar();                     
}

int x(int n,int a[ ],int b[ ])
{
  int num=0,num1=0,i=n-1,j=n-1;
  int m=0,k=0,z,shen=n;
  while(shen>1)
  {
                  if(a[i]>b[j])
                  {
                               num++;
                               i--;
                               j--;
                               shen--;
                               continue;
                  }
                  if(a[m]>b[k])
                  {
                               num++;
                               m++;
                               k++;
                               shen--;
                  }
                  else
                  {
                                if(a[m]<b[j])
                                num1++;
                                
                                m++;
                                j--;
                                shen--;
                  }
                  
  }
  if(a[m]>b[k])  num++;
  if(a[m]<b[k])  num1++;
  z=num-num1;
  return z;
}

  

int main()
{
    int m=0,i,win,n,d;
    int l,j,t;
    int a[1000], b[1000];
    while(m==0)
    {
               scanf("%d",&n);
               if(n==0) break;
               else
               {
                   for(i=0;i<n;i++)
                   scanf("%d",&a[i]);
                   for(i=0;i<n;i++)
                   scanf("%d",&b[i]);
                   
                   
               }
               
               for(j=0;j<n-1;j++)
               { 
                 for(l=0;l<n-j-1;l++)
                     if(a[l]>a[l+1])
                     {
                                    t=a[l];
                                    a[l]=a[l+1];
                                    a[l+1]=t;
                     }
                 }
               for(j=0;j<n-1;j++)
               {
                 for(l=0;l<n-j-1;l++)
                     if(b[l]>b[l+1])
                     {
                                    t=b[l];
                                    b[l]=b[l+1];
                                    b[l+1]=t;
                     }
               }
               
               d = x(n,a,b);
               win=d*200;
               printf("%d\n",win);
    }
}

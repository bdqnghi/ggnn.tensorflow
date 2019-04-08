void main()
{
     int n,l,i,j,x;
     scanf("%d",&n);
     l=0;
     int a[20000];
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     for(j=0;j<n;j++)
     {
                      for(i=(j+1);i<n;i++)
       {
                         if(a[j]==a[i])
                         a[i]='*';
       }
     }
      if(a[n-1]!='*')
      {
                      for(i=0;i<n-1;i++)
          { 
                      if(a[i]!='*')
                       printf("%d ",a[i]);
         }
         printf("%d",a[n-1]);
      }
    else
     {
          for(i=n-1;i>0;i--)
      {
                        if(a[i]=='*')l=l+1;
                        else break;
      }
          for(j=0;j<n-l-1;j++)
          { 
                      if(a[j]!='*')
                       printf("%d ",a[j]);
         }
         printf("%d",a[n-l-1]);
     }
    
      
       
    
    

}

int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
    {
      int k;
      cin>>k;
      if(k==0) cout<<60<<endl;
      else 
       {
         int a[k];
         for(int j=0;j<k;j++)  
           cin>>a[j];
         for(int j=0;j<k;j++)
          {
             if(a[j]+3*(j+1)<=60)
               {
                if(j==k-1) cout<<60-3*k<<endl;
                else
                continue;
               }
             else
                if(a[j]+3*(j+1)<=63)
                  {
                   cout<<a[j]<<endl;
                   break;
                  }
             else
                {
                 cout<<60-3*j<<endl;
                 break;
                }
          }
       }
    }
 

 return 0;
 } 

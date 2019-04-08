int main()
{   
    
    int i=0,j=0,h=0,k=0,n=0,m=0,a[100][100],t=0;  
     cin>>n>>m;
      for(j=0;j<n;j++)
      {
          for(h=0;h<m;h++)
          {                                                         
              cin>>*(*(a+j)+h); 
              
                  
          }
      } 
      for(i=0;i<n+m-1;i++)
      {
          for(j=0;j<n;j++)
          {
              for(h=0;h<m;h++)
              {
                  if(j+h==i)
                  {cout<<*(*(a+j)+h)<<endl;} 
              }
          }
      }
           return 0;
}
      
      

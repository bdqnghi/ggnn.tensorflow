int main()
{
    int a[110]={0};
    int n ;
    cin>>n;
    a[0]=1;
    for(int i=0;i<n;i++)
    {
          for(int j=0;j<100;j++)
          {
             a[j]=a[j]*2;
          }
          //for(int j=0;j<20;j++)
          //{cout<<a[j]<<endl ;}
          for(int j=0;j<100;j++)
          {
             if(a[j]>9)
             {
                 //cout<<a[j]<<endl;
                 a[j+1]=a[j+1]+(a[j]/10);
                 a[j]=a[j]%10;
                 //cout<<a[j+1]<<",,,"<<endl;
             }
          }
                 
    }
    //cout<<a[0]<<endl;
    for(int i=99;i>=0;i--)
    {
            if(a[i]!=0)
            {
              
              for(int j=i;j>=0;j--)
              {
                  cout<<a[j]; 
                  
              }
              break;
            }
    }
   
    return 0;
    
}

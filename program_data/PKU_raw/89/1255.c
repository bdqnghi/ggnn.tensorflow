int main()
{
    int n,r=0;
    cin>>n;
    int a[10000],b[10000];
    int x=0;
    for(int i=0;;i++)
      {
       cin>>a[i]>>b[i];
        if(a[i]==0&&b[i]==0)
         break;
       x++;
       }
     
    int sum2=0,sum1=0;
    for(int i=0;i<n;i++)
    {
        sum1=0;
        sum2=0;
      for(int j=0;j<x;j++)
      {
         sum1+=(a[j]==i);
      }
         if(sum1==0)
         {
            for(int k=0;k<x;k++)
              if(b[k]==i)
                 sum2+=a[k];
            if(sum2==(n*(n-1)/2-i))
              {
                cout<<i;
                r=1;
              }
         }    
         else continue;
        
    } 
    
 if(r==0)  cout<<"NOT FOUND";


 return 0;
 } 


int main()
{
int n,k;
      cin>>n>>k;
int a[n];
int x,y,sum;
       sum=0;
int i,j,m;
  for(i=0;i<n;i++)
  cin>>a[i];
  for(j=0;j<n-1;j++)
  
  for(m=j+1;m<n;m++)
  {
      x=a[j]+a[m];
if(x==k)
   y=1;
else
   y=0;
   sum=sum+y;
   
   
}

  
    
    
    
if(sum==0)
   cout<<"no";
else
   cout<<"yes";

return 0;


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    }
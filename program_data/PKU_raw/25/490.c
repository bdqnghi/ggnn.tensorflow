int main()
{
  int n;
  cin >> n;
  int i,ans=1,j,k=1;
  int a[100]={0};
  if(n==0)
  {
    cout << 1 << endl;
  }
  else
  {
     a[0]=1;
     int t=0;
     while(t<n)
     {
       t++;
       for(i=0;i<100;i++)
       {
         a[i]=a[i]*2;
         
       }
       for(i=0;i<100;i++)
       {
         if(a[i]>=10)
         {
           
           
           a[i+1]=a[i+1]+(a[i]/10);
           a[i]=a[i]%10;
           
         }
       }
     }
     
      j=99;
      while(a[j]==0)
      {
        j--;
      }                                   
     for(;j>=0;j--)
     {
       cout << a[j];
     }
     cout << endl;
  }
  cin.get();cin.get();cin.get();
  return 0;
}

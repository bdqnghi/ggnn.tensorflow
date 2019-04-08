int main()
{
  int n;
  int i,j,t,k,b;
  cin >> n;
  int a[n];
  t=0;
  for(i=0;i<n;i++)
  {
    cin >> a[i];
  }
  cin >> b;
  i=0;
    while(i<n-t)
    {
     if(a[i]==b)
     { 
              for(k=i+1;k<n;k++)
       {
         a[k-1]=a[k];
       }
              t++;
       
     }
     else i++;
    }
  
  for(i=0;i<n-t-1;i++)
  {
    cout << a[i] << " ";
  }
  cout << a[n-t-1] << endl;
  cin.get(); cin.get();cin.get();
  return 0;
}



int main()
{ int a[10],n,m,i,j,k;
  cin >>n;
  a[1]=n/100;
  n=n%100;
  a[2]=n/50;
  n=n%50;
  a[3]=n/20;
  n=n%20;
  a[4]=n/10;
  n=n%10;
  a[5]=n/5;
  n=n%5; 
  a[6]=n;
  for (i=1;i<=6;i++)
       cout <<a[i]<<endl; 

  return 0;
    
    
    }

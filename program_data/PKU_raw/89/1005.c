int main()
{
  int n;
  cin >> n;
  int i=0,j=0,k=0,l=0;
  int a[100];
  int b[100];
  int c[n-1];
  int d[n-1];
  for(i=0;i<n-1;i++)
  {
    c[i]=i;
    d[i]=0;
  }
 
  while(1)
  {
    int p,q;
    cin >> p >> q;
    l++;
    if((p==0)&&(q==0))
    {
      break;
    }
    else
    {
      d[q]++;
    }
  }
  for(i=0;i<l;i++)
  {
    if(d[i]==n-1)
    {
      cout << c[i] << endl;
      k++;
      break;
    }
  }
  if(k==0)
  {
    cout << "NOT" << " " << "FOUND" << endl;
  }
  cin.get();cin.get();cin.get();
  return 0;
}

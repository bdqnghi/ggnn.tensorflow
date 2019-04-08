int main()
{
  int n;
  cin >> n;
  cin.get();
  int i=0;
  while(i<n)
  {
    i++;
    char a[100001];
    cin.getline(a,100001);
    int j,k,l;
    l=strlen(a);
    const int l1=l;
    int b[l1];
    for(j=0;j<l;j++)
    {
      b[j]=0;
    }
    for(j=0;j<l;j++)
    {
      for(k=0;k<l;k++)
      {
        if(a[j]==a[k])
        {
          b[j]++;
        }
      }
    }
    int t=0;
    for(j=0;j<l;j++)
    {
      if(b[j]==1)
      {
        cout << a[j] << endl;
        t++;
        break;
      }
    }
    if(t==0)
    {
      cout << "no" << endl;
    }
  }        
  cin.get();cin.get();cin.get();
  return 0;
}

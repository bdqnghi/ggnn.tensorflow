int main()
{
  char a[1100];
  cin.getline(a,1100);
  int i,j=0,k=0,l;
  l=strlen(a);
  int b[1100]={0};
  char c[1100]={0};
  c[0]=a[0];
  char t=a[0];
  b[0]=1;
  for(i=1;i<l;i++)
  {
    if((a[i]==t)||((a[i]-'a')==(t-'A'))||((a[i]-'A')==(t-'a')))
    {
       b[k]++;
    }
    else
    {
      k++;
      b[k]=1;
      c[k]=a[i];
      t=a[i];
    }
  }
  for(i=0;i<=k;i++)
  {
    cout << "(" ;
    if(c[i]>96)
    {
      int m=c[i]-'a';
      char t=m+'A';
      cout << t << ",";
    }
    else
    {
      cout << c[i] << ",";
    }
    cout << b[i] << ")";
  }
  cin.get();cin.get();cin.get();
  return 0;
}

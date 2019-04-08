int main()
{
    int n;
    int a,b;
    int i,k,l,j;
    cin >> n;
    for(a=3;a<=n/2;a=a+2)
    {
       j=0;                  
      for(i=2;i<a;i++)
      {if(a%i==0)
        {j=j+1;}
      }
      if(j==0)
      {
          b=n-a;
      l=0;
      for(k=2;k<b;k++)
      {
        if(b%k==0)
        {l=l+1;}
      }
      if(l==0)
            cout << a << " " << b << endl;
      continue;
    }}
    return 0;
}




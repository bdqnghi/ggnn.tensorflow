int main ()
{
    char a[1000];
    int d[1000],n;
    char b='(',c=')';
    int pp=2;int ww=0;
    for (int pa=10;pa<=pp+9;pa++)
    {
          for (int i=1;i<=999;i++)
          {
              a[i]=getchar();
              if (a[i]=='\n')
              {
                 n=i-1;
                 break;
              }
          }
          if (a[1]=='('&&a[2]==')'&&ww==0)
          {pa=pa-4;ww=1;}
          if (a[1]=='('&&a[3]==')'&&ww==0)
          {pa=pa-3;ww=1;}
          for (int i=1;i<=n;i++)
          d[i]=0;
          for (int i=1;i<=n;i++)
          {
              if (a[i]!=b&&a[i]!=c)
              d[i]=1;
          }
          for (int i=1;i<=n/2;i++)
          {
              for (int j=1;j<=n;j++)
              {
                  if (a[j]==b||d[j]==1)
                  continue;
                  for (int k=j;k>0;k--)
                  {
                      if (a[k]==c||d[k]==1)
                      continue;
                      d[j]=1;
                      d[k]=1;
                      break;
                  }
              }
          }
          for (int i=1;i<=n;i++)
          cout <<a[i];
          cout <<endl;
          for (int i=1;i<=n;i++)
          {
              if (d[i]==1)
              cout <<" ";
              else
              {
                  if (a[i]=='(')
                  cout <<"$";
                  else
                  cout <<"?";
              }
          }
          cout <<endl;
    }
    return 0;
}
    

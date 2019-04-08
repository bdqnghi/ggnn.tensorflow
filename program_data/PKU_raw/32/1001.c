int main()
{
  int n;
  cin>>n;
  int i,j,k;
  char c[n][101];
  int d[n];
  for(j=0;j<n;j++)
  {
     char a[101],b[101];
     cin>>a>>b;
     if(j==n-1);
     else cin.get();
     int sizea,sizeb;
     sizea=strlen(a);
     d[j]=sizea;
     sizeb=strlen(b);
     for(i=sizeb-1;i>=0;i--)
     {
         b[i+sizea-sizeb]=b[i];                   
     }
     for(i=0;i<sizea-sizeb;i++)
     b[i]='0';
     for(i=sizea-1;i>=0;i--)
     {
        if(a[i]>=b[i]) 
        c[j][i]=a[i]-b[i]+'0';
        else if(a[i]<b[i])
        {
            a[i-1]=a[i-1]-1;
            a[i]=a[i]+10;
            c[j][i]=a[i]-b[i]+'0';
        }                   
     }
                  
  } 
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     if(c[i][j]!='0')
     break;
     for(k=j;k<d[i];k++)
     cout<<c[i][k];
     cout<<endl;             
  } 
  
  return 0;
}

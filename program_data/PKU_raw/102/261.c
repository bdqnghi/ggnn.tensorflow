int main()
{
 int n,i,j,m,p;
 cin>>n;
 char str[n][7];
 double a[n],b[n],c[n],t;
 for(i=0;i<=n-1;i++)
 {cin>>str[i];
  cin>>a[i];
 }
 m=0;
 for(i=0;i<=n-1;i++)
 {if(str[i][0]=='m')
  {b[m]=a[i];
   m=m+1;}
  }
  p=0;
  for(i=0;i<=n-1;i++)
  {if(str[i][0]=='f')
   {c[p]=a[i];
    p=p+1;}
  }
  for(j=0;j<m-1;j++)
  {for(i=0;i<m-1-j;i++)
   {if(b[i]>b[i+1])
    {t=b[i];b[i]=b[i+1];b[i+1]=t;}
   }
  }
  for(j=0;j<p-1;j++)
  {for(i=0;i<p-1-j;i++)
   {if(c[i]<c[i+1])
    {t=c[i];c[i]=c[i+1];c[i+1]=t;}
   }
  }
  cout<<fixed<<setprecision(2)<<b[0];
  if(m>1)
  {for(i=1;i<=m-1;i++)
   {cout<<" "<<fixed<<setprecision(2)<<b[i];}
   }
  for(i=0;i<=p-1;i++)
  {cout<<" "<<fixed<<setprecision(2)<<c[i];}
 return 0;
}
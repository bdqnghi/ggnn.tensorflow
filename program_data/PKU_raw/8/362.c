int n,m,i,j,k,a[100],b[100];
int read()
{
  cin>>n>>m;
  for (i=1;i<=n;i++)
       cin>>a[i];
  for (i=1;i<=m;i++)
       cin>>b[i];
  return 0;
}
int sorta()
{ int min,t;
  for (i=1;i<=n-1;i++)
       { min=i;
        for (j=i+1;j<=n;j++)
             if (a[min]>a[j]) min=j;
        t=a[i];
        a[i]=a[min];
        a[min]=t;   
     }
     return 0;
}
int sortb()
{ int min,t;
  for (i=1;i<=m-1;i++)
       { min=i;
        for (j=i+1;j<=m;j++)
             if (b[min]>b[j]) min=j;
        t=b[i];
        b[i]=b[min];
        b[min]=t;   
     }
     return 0;
}
int write()
{ for (i=1;i<=n;i++)
       cout<<a[i]<<' ';
  for (i=1;i<m;i++)
       cout<<b[i]<<' ';
  cout <<b[m]<<endl;
   return 0;
     }
int main()
{ k=read();
  k=sorta();
  k=sortb();
  k=write();
  return 0; 
    }

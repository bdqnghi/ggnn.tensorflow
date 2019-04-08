int main()
{ 
  int a[100],b[100],x[20],y[20],z[20];
  double h[100];
  double q;
  int i,j,k,n,t,p;
  cin >>n;
  for (i=1;i<=n;i++)
       cin >>x[i]>>y[i]>>z[i];
  t=0;
  for (i=1;i<n;i++)
       for (j=i;j<=n;j++) 
            if (i!=j)
                { t++;
                  a[t]=i;
                  b[t]=j;
                  h[t]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j])); 
                 }
  for (i=1;i<=t;i++)
       for (j=1;j<t;j++)
            { if (h[j]<h[j+1])
                  {q=h[j];
                   h[j]=h[j+1];
                   h[j+1]=q;
                   p=a[j];
                   a[j]=a[j+1];
                   a[j+1]=p;
                   p=b[j];
                   b[j]=b[j+1];
                   b[j+1]=p;  }
              
            }
  for (i=1;i<=t;i++)
       { cout<<"("<<x[a[i]]<<","<<y[a[i]]<<","<<z[a[i]]<<")-("<<x[b[i]]<<","<<y[b[i]]<<","<<z[b[i]]<<")=";
         printf("%.2f",h[i]);
         cout<<endl;
         }
  return 0;
}

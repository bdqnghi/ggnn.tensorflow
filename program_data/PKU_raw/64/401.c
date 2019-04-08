 
int main() 
{ 
  int n,i,j,k,p,l; 
  double x[10],y[10],z[10],m; 
  double d[100],c[100]; 
  int a[100],b[100]; 
  scanf("%d",&n); 
  for(i=0;i<=n-1;++i) 
  { 
    scanf("%lf%lf%lf",&x[i],&y[i],&z[i]); 
  } 
  k=0; 
  for(i=0;i<=n-2;++i) 
  { 
    for(j=i+1;j<=n-1;++j) 
    { 
   
  d[k]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*
(z[i]-z[j])); 
      a[k]=i; 
      b[k]=j; 
      c[k]=d[k]; 
      k++; 
    } 
  } 
  for(i=0;i<=k-2;++i) 

  { 
    for(j=i+1;j<=k-1;++j) 
    { 
      if(c[i]<c[j]) 
      { 
        m=c[i]; 
        c[i]=c[j]; 
        c[j]=m; 
      } 
    } 
  } 
  for(i=0;i<=k-1;++i) 
  { 
    for(j=0;j<=k-1;++j) 
    { 
      if(c[i]==d[j]) 
      { 
     
  printf("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n",x[a[j]],y[a[j
]],z[a[j]],x[b[j]],y[b[j]],z[b[j]],c[i]); 
        d[j]=-1; 
      } 
    } 
  } 
  return 0; 
} 
 
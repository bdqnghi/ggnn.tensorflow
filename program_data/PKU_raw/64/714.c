int main()
{ 
    int a[11][3],i,j,n,k,c[46],d[46],f;
    double b[46],t;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>a[i][0]>>a[i][1]>>a[i][2];                               
    }
    k=1;
    for(i=1;i<n;i++)
     for(j=i+1;j<=n;j++)
      {
    b[k]=sqrt(  (a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2]) );
       c[k]=i;
       d[k]=j;
       k++;
      }
   f=n*(n-1)/2;
      for(i=1;i<f;i++)
      for(j=f-1;j>=i;j--)
      {
        if(b[j]<b[j+1])
        {
         t=b[j];
         b[j]=b[j+1];
         b[j+1]=t;
         t=c[j];
         c[j]=c[j+1];
         c[j+1]=t;
         t=d[j];
         d[j]=d[j+1];
         d[j+1]=t;
        }
      }
     for(i=1;i<f;i++)
     cout<<'('<<a[c[i]][0]<<','<<a[c[i]][1]<<','<<a[c[i]][2]<<")-("<<a[d[i]][0]<<','<<a[d[i]][1]<<','<<a[d[i]][2]<<")="<<fixed<<setprecision(2)<<b[i]<<endl;
     cout<<'('<<a[c[f]][0]<<','<<a[c[f]][1]<<','<<a[c[f]][2]<<")-("<<a[d[f]][0]<<','<<a[d[f]][1]<<','<<a[d[f]][2]<<")="<<fixed<<setprecision(2)<<b[f];
return 0;
}  

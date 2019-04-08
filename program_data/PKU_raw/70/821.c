int main()
{int i,j,k,n;double d[100][100];double x[100],y[100],dis=0.0;
    cin>>n;
    for(i=0;i<n;i++)cin>>x[i]>>y[i];
    for(j=0;j<n;j++)
    for(k=0;k<n;k++)
   {d[j][k]=sqrt((x[j]-x[k])*(x[j]-x[k])+(y[j]-y[k])*(y[j]-y[k]));
   if(d[j][k]>dis)dis=d[j][k];}
     printf("%.4f\n",dis);
     return 0;}
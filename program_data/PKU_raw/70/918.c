int main()
{
 int n,i,j;                        //??n?????i?j
 double x[100],y[100],dis,max;     //??x?y??????dis?????max???
 cin>>n;
 max=0;
 for(i=1;i<=n;i++)
   cin>>x[i]>>y[i];                //????
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
   {
    dis=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));    //????
    if(dis>max)
     max=dis;                                       //?????
   }
 cout<<fixed<<setprecision(4)<<max;
 return 0;
}
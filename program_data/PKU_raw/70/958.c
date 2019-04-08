int main()
{
    int n;     //?????
    cin>>n;
    if(n<2)
     return 0;
    double x[n],y[n],m;              //?????? ????????? 
    for(int i=0;i<n;i++)
    cin>>x[i]>>y[i];
    m=sqrt((x[1]-x[2])*(x[1]-x[2])+(y[1]-y[2])*(y[1]-y[2])) ;
    for(int i=0;i<n;i++)
      for (int j=0;j<n;j++)
      {
          if (m<sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])))
            m=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])); 
          }
    cout<<m; 
     
    return 0; 
    } 

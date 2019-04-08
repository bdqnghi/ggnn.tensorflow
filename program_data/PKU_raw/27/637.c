/*?????????
???
2012?10?7?10:46:21*/
int main()
{
    int n,i;
    float a[1000],b[1000],c[1000];
    double x1[1000],x2[1000],d[1000],D[1000],y[1000];
    cin>>n;                                      //??????n 
    for(i=1;i<=n;i++)                            //???i=n??? 
    {
    cin>>a[i]>>b[i]>>c[i];                      //??3??? 
    d[i]=b[i]*b[i]-4*a[i]*c[i];                 //??? 
    if(d[i]==0)                                 //???=0????? 
    {x1[i]=(0-b[i])/(2*a[i]);
    cout<<fixed<<setprecision(5)<<"x1=x2="<<x1[i]<<endl;
}
    if(d[i]>0)                                  //???>0 ??????? 
    {x1[i]=(sqrt(d[i])-b[i])/(2*a[i]),x2[i]=(0-sqrt(d[i])-b[i])/(2*a[i]);
    cout<<fixed<<setprecision(5)<<"x1="<<x1[i]<<";x2="<<x2[i]<<endl;
}
    if(d[i]<0)                                  //???<0??????? 
    {D[i]=0-d[i];
    x1[i]=sqrt(D[i])/(2*a[i]);
    y[i]=(0-b[i])/(2*a[i]);
    cout<<fixed<<setprecision(5)<<"x1="<<y[i]<<"+"<< x1[i]<<"i;x2="<<y[i]<<"-"<<x1[i]<<"i"<<endl;
}}
    return 0;
} 
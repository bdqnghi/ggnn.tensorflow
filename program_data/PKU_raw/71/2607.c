int main()
{
    int y=0,m1=0,m2=0,n=0;
    int i=0,j=0;
    int a[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};//??0??????? 
    cin>>n;
    for(j=1;j<=n;j++)
    {  int s=0;
    cin>>y>>m1>>m2;
    if((y%4== 0 && y%100!=0)||(y%400==0))//????????? 
    a[2]=29;
    else a[2]=28;
    if(m1<m2)
    {
    for(i=m1;i<m2;i++)
    s+=a[i];
    }
    if(m1>m2)
    {
    for(i=m2;i<m1;i++)
    s+=a[i];
    
    }
    if(s%7==0)cout<<"YES"<<endl;
    if(s%7!=0)cout<<"NO"<<endl;
    }
    //int sss;cin>>sss;
    return 0;
}    
    
    
    

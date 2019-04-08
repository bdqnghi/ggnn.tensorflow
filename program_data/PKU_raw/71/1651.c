int main()
{
    int  i=1,n,year[201],a[201],b[201];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    cin>>year[i]>>a[i]>>b[i];//??????? 
    if((year[i]%4==0&&year[i]%100!=0)||year[i]%400==0)//??????? 
    {
     int m[13]={0,1,32,61,92,122,153,183,214,245,275,306,336};
     int j,k;
     j=a[i];
     k=b[i];
     if((((m[k]-m[j])%7==0)&&(m[k]-m[j]>0))||(((m[j]-m[k])%7==0)&&(m[j]-m[k]>0)))//????? 
     cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    }
     else 
     {
     int m[13]={0,1,32,60,91,121,152,182,213,244,274,305,335};
     int j,k;
     j=a[i];k=b[i];
     if((((m[k]-m[j])%7==0)&&(m[k]-m[j]>0))||(((m[j]-m[k])%7==0)&&(m[j]-m[k]>0)))//????? 
     cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
     }
     }
 
     return 0;
     }
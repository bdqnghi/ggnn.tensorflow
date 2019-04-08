
int main()
{
    int n,a[100],b[100],hour=0,time=0;//a?????b???? 
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i]>>b[i];
    for(int i=0;i<n;i++)
    {
      if((a[i]>=90)&&(a[i]<=140)&&(b[i]>=60)&&(b[i]<=90))//????????1 
      time=time+1;
      if((a[i]<90)||(a[i]>140)||(b[i]<60)||(b[i]>90)||(i==n-1))
      {
        if(hour<time)
        hour=time;//???????????????? 
        time=0;
      }
    }
    cout<<hour<<endl;
    return 0;
}

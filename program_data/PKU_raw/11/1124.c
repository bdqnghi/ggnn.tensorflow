int main()
{
    int y,m,d,daysum=0;
    cin>>y>>m>>d;
    int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int dayleap[13]={0,31,29,31,30,31,30,31,31,30,31,30,31} ;
    if((y%4!=0)||((y%100==0)&&(y%400!=0)))
    {
      for(int i=0;i<m;i++)
         daysum += day[i];
      daysum += d;
    }
    else
    {
      for(int i=0;i<m;i++)
         daysum += dayleap[i];
      daysum += d;
    }
    cout<<daysum;

    return 0;
}

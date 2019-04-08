int judge(int x)
{
if(x%400==0) return 1;
if(x%100==0 && x%400!=0) return 0;
if(x%4==0) return 1;
else return 0;
}
int main()
{
    int n,year,month0,month1,mark;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    mark=0;
    cin>>year>>month0>>month1;
    if(month0>month1){int temp;temp=month0;month0=month1;month1=temp;}
    if(judge(year)==0)
    {
     if(month0==1&&month1==10) mark=1;
     if(month0==2&&month1==3) mark=1;
     if(month0==2&&month1==11) mark=1;
     if(month0==3&&month1==11) mark=1;
     if(month0==4&&month1==7) mark=1;
     if(month0==9&&month1==12) mark=1;
     }
     else
     {
     if(month0==1&&month1==4) mark=1;
     if(month0==1&&month1==7) mark=1;
     if(month0==2&&month1==8) mark=1;
     if(month0==3&&month1==11) mark=1;
     if(month0==4&&month1==7) mark=1;
     if(month0==9&&month1==12) mark=1;  
     }
     if(mark==1) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
      } 
    return 0;
    }
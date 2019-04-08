int panduan(int a,int b)
{
   if(a>=90&&a<=140&&b>=60&&b<=90)return 1;
   else return 0;
}
int main()
{
    int n,res,temp,a,b;
    res=0;
    temp=0;
    cin>>n;
    while(n--)
    {
       cin>>a>>b;
       if(panduan(a,b))temp+=1;
       else
       {
          if(temp>res)res=temp;
          temp=0;
       }
     }
     if(temp>res)res=temp;
     cout<<res<<endl;
return 0;
}
int a[100]={0};
int f(int i,int t)
{
     cin>>a[i];//i?????? 
     if(i<t) 
     {
        f(i+1,t);
     }//?????????????????? 
     if(i==1) cout<<a[i];
     else cout<<a[i]<<' ';
}
int main()
{
     int t,i=1;
     cin>>t;
     f(i,t); 
     return 0;
}

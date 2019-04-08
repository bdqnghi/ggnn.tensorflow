int main()
{
int w;
cin>>w;
int i=0;
int a[13],day[13]={12,31,28,31,30,31,30,31,31,30,31,30,31};
a[0]=w;
for(i=1;i<=12;i++)
{
a[i]=(a[i-1]+(day[i-1]%7))%7;
if(a[i]==5)cout<<i<<endl;
}
return 0;
}

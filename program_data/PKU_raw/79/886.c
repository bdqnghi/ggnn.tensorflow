int main()
{
int n,m,i,a;
while(1)
{cin>>n;
cin>>m;
if(n==0)break;
else{a=0;
if(n>1)
for(i=2;i<=n;i++)
a=(a+m)%i;
cout<<(a+1)<<endl;
}}
return 0;}

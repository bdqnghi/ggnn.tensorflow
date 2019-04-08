int main()
{
int n,a[6]={0,0,0,0,0,0},b[6]={100,50,20,10,5,1},i;
cin>>n;
for(i=0;i<=5;i++)
{
while(n>=0)
{
n=n-b[i];
a[i]++;
}
n=n+b[i];
a[i]=a[i]-1;
}
for(i=0;i<=5;i++)
{
cout<<a[i]<<endl;
}
return 0;
}
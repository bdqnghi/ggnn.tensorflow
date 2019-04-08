int main()
{
int n,i,a[5],j;
cin>>n;
for(i=0;i<=4;i++)
{
if(n==0)
break;
a[i]=n%10;
n=(n-a[i])/10;
}
for(j=0;j<=i-1;j++)
{
n=10*n+a[j];
}
cout<<n<<endl;
return 0;
}
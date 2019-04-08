int fang(int m,int n);//??????
int main()
{
int p,i,m,n;
cin>>p;
for(i=1;i<=p;i++)
{
cin>>m>>n;
cout<<fang(m,n)<<endl;//????
}
return 0;
}
int fang(int m,int n)
{
int sum;
if(n==1||m==1||m==0)//????
sum=1;
else if(m<0)
sum=0;
else sum=fang(m,n-1)+fang(m-n,n);//???
return sum;
}
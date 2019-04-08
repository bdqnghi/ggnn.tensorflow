int main()
{
int n;
cin>>n;
while(n--)
{
int a=0,b=1,c,num,re=0;
cin>>num;
num--;
while(num--)
{
c=b;
b=a+b;
a=c;
}
cout<<b<<endl;
}
return 0;
}
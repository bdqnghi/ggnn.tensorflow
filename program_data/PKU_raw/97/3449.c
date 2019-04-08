int main()
{
int n,i,a[6];
cin>>n;
a[0]=n/100;
n%=100;
a[1]=n/50;
n%=50;
a[2]=n/20;
n%=20;
a[3]=n/10;
n%=10;
a[4]=n/5;
n%=5;
a[5]=n%5;
for(i=0;i<6;i++)
cout<<a[i]<<endl;
return 0;
}
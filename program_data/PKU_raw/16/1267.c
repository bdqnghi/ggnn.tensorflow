//???????
//??????
//???10.31
int main()
{
int n,a[4];
cin>>n;
if(n<10)
cout<<n<<endl;
else if(n>=10&&n<100)
{a[1]=n%10;
a[2]=(n/10)%10;
cout<<a[1]<<a[2]<<endl;}
else if(n>=100&&n<1000)
{a[1]=n%10;
a[2]=(n/10)%10;
a[3]=(n/100)%10;
cout<<a[1]<<a[2]<<a[3]<<endl;}

else if(n>=1000&&n<10000)
{a[1]=n%10;
a[2]=(n/10)%10;
a[3]=(n/100)%10;
a[4]=(n/1000)%10;
cout<<a[1]<<a[2]<<a[3]<<a[4]<<endl;}

else if(n=10000)
cout<<"00001"<<endl;
return 0;
}




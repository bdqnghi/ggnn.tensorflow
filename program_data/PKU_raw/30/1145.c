

int main()
{int n,sum=0;
cin>>n;
for(;n>0;n--)
{if(n%7==0||n%10==7||(n/10)%10==7) continue;
sum+=n*n;
}
cout<<sum<<endl;



return 0;
}
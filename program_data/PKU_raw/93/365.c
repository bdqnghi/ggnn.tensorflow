int main ( )
{int n,m=0,a[3];
cin>>n;
if (n%3==0) a[m++]=3;
if (n%5==0) a[m++]=5;
if (n%7==0) a[m++]=7;
if (m==0) cout<<"n";
else
{
int i;
for (i=0;i<m-1;i++) cout<<a[i]<<' ';
cout<<a[m-1];
}
return 0;
}
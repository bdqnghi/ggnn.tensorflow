int main()
{int n,i=0;
cin>>n;
float a[n],b[n];
for(i=0;i<=n-1;i++)
{cin>>a[i]>>b[i];}
float c;
c=b[0]/a[0];
for(i=1;i<=n-1;i++)
{if(b[i]/a[i]-c>0.05)
  cout<<"better"<<endl;
else if(c-b[i]/a[i]>0.05)
  cout<<"worse"<<endl;
else cout<<"same"<<endl;}
return 0;}

  
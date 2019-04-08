 int main()
{  char a[101]={0};
 int b[101]={0};
 int c[101]={0};
   int i,l,m;
  cin>>a;
  l=strlen(a);
  if(l==1)
  {cout<<"0"<<endl;
   cout<<a[0]<<endl;}
  else if(l==2&&a[0]=='1'&&(a[1]=='0'||a[1]=='1'||a[1]=='2'))
   {cout<<"0"<<endl;
    cout<<a<<endl;}
else {
  for(i=0;i<l;i++)
  {b[i]=a[l-1-i]-'0';}
  for(i=l-1;i>=1;i--)
  {m=b[i]*10+b[i-1];
   b[i-1]=m%13;
   c[i-1]=m/13;}
i=l-1;
 while(c[i]==0)i--;
 for(;i>=0;i--)
 cout<<c[i];
 cout<<endl;
 cout<<b[0];}
return 0;
}
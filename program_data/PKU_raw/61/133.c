int main()
{int n,i,j;
cin>>n;
int a[n];
for(i=0;i<n;i++)
  {cin>>a[i];}
int b[20]={0};
for(j=0;j<n;j++)
   {b[0]=1;
    b[1]=1;
    if(a[j]<=2)
     cout<<"1"<<endl;
    else
    {for(i=2;i<a[j];i++)
      {b[i]=b[i-1]+b[i-2];}
    cout<<b[i-1]<<endl;}}
return 0;
}
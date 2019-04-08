int main()
{
 int n,m,i,t,j;
 int a[100000]={0};
 cin>>n;
 for(i=0;i<n;i++)
  cin>>a[i];
 cin>>m;
 i=0;
 t=0;
 while(i<n-t)
  {if(a[i]==m)
    {t=t+1;
     for(j=i;j<n-t;j++)
      a[j]=a[j+1];
     }
  else i++;}
for(i=0;i<n-t-1;i++)
 cout<<a[i]<<" ";
 cout<<a[n-t-1]<<endl;
return 0;}


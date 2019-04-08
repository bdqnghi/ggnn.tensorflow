int main()
{int n,a[1000],b[1000],i,max=0,res=0;
cin>>n;
for(i=1;i<=n;i++)
  {cin>>a[i]>>b[i];
   if(a[i]<=140&&a[i]>=90&&b[i]<=90&&b[i]>=60)
   max=max+1;
   else max=0;
   if(max>res) res=max;
  }
cout<<res<<endl;  
return 0;        
}
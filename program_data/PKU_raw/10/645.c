int main()
{
int i,j,n,max,a[100],b[100];
cin>>n; 
for(i=0;i<n;i++)
   cin>>a[i];
b[0]=1;//???
for(i=1;i<n;i++)
{
    b[i]=1;//b[i]????1
    for(j=0;j<i;j++)
        if(a[i]<=a[j]&&b[j]+1>b[i])
           b[i]=b[j]+1;
} 
max=0; 
for(i=0;i<n;i++)//?????????????????
    if(b[i]>max)
       max=b[i];
cout<<max<<endl;
return 0;
}

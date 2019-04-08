int main()
{
int n,i,j;
double a[1000][2];
cin>>n;
for(i=0;i<n;i++)
cin>>a[i][0]>>a[i][1];
double max=0,temp;
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
{
temp=pow(a[i][0]-a[j][0],2.0)+pow(a[i][1]-a[j][1],2.0);
temp=sqrt(temp);
if(temp>max)max=temp;
}
cout<<fixed<<setprecision(4)<<max<<endl;
return 0;
}

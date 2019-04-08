int main()
{
int i,j,n;
double a[100][2],m,dis;
cin>>n;
for (i=0;i<=n;i++)
cin>>a[i][0]>>a[i][1];
m=0;
for (i=0;i<n;i++)
for(j=i+1;j<n;j++)
{
dis=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));
if (dis>m)
m=dis;
}
cout<<m<<endl;
return 0;
}


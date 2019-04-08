int main()
{
int n;
cin>>n;
int i;
int m[100];
for(i=0;i<n;i++)cin>>m[i];
int m1=0,m2=0;
for(i=0;i<n;i++)if(m[i]>m1)m1=m[i];
for(i=0;i<n;i++)if(m[i]>m2 && m[i]<m1)m2=m[i];
cout<<m1<<endl<<m2<<endl;
return 0;
}

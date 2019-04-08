
int main()
{
int n,i,j;
int a[100],b[100],bm=-1;
cin>>n;
for(i=0;i<100;i++) b[i]=1;
for(i=1;i<=n;i++)
{cin>>a[i];
for(j=1;j<i;j++) if(a[j]>=a[i]&&(b[j]+1)>b[i]) b[i]=(b[j]+1);
if(b[i]>bm) bm=b[i];
}

cout<<bm;


}

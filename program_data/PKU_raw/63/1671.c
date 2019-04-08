

int main()
{int n,m,p,q;
cin>>n>>m;
int a[100][100],b[100][100];
int i,j,sum;
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{cin>>a[i][j];            } 
cin>>p>>q; 
for(i=0;i<p;i++)
for(j=0;j<q;j++)
{cin>>b[i][j];            }  
int c[100][100];
for(i=0;i<n;i++)
for(j=0;j<q;j++)
{c[i][j]=0;int k;
for(k=0;k<m;k++)
c[i][j]+=a[i][k]*b[k][j]; 
cout<<c[i][j];
if(j==q-1&&i!=n-1)
cout<<endl;
else if(j==q-1&&i==n-1)
     break;
else if(j!=q-1)
cout<<' ';
 }  

                  
 
 return 0;
}

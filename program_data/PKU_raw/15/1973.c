int main()
{
int n,i,j,a[100][100],x,y,x1,y1,s;
cin>>n;
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
    cin>>a[i][j];
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
    if(a[i][j]==0)
      {
        x=i;
        y=j;
        goto l;          
      }
l:
x1=x;y1=y; 

   while(x1<n&&a[x1][y]==0)
     x1++;
   while(y1<n&&a[x][y1]==0)
     y1++;
s=(x1-x-2)*(y1-y-2);
//cout<<x1<<y1<<x<<y<<endl ;
cout<<s<<endl; 
return 0; 
}

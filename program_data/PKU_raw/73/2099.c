int main()
{
int a[6][6],b[6],c[6],temp=0;
for(int i=1;i<6;i++)
  for(int j=1;j<6;j++)
    cin>>a[i][j];
for(int i=1;i<6;i++)
  {
   a[i][0]=-999999999;
   for(int j=1;j<6;j++)
      if(a[i][j]>a[i][0])
        {
         a[i][0]=a[i][j];
         b[i]=j;                  
        }
  }
for(int i=1;i<6;i++)
  {
   a[0][i]=999999999;
   for(int j=1;j<6;j++)
      if(a[j][i]<a[0][i])
        {
         a[0][i]=a[j][i];
         c[i]=j;                  
        }
  }
for(int i=1;i<6;i++)
   if(a[0][b[i]]==a[i][0])
     {
      cout<<i<<' '<<b[i]<<' '<<a[i][0];     
      temp=1;
     } 
if(temp==0)cout<<"not found";
cin.get();
cin.get();
return 0;
}
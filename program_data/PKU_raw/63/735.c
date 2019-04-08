int a[100][100],b[100][100],c[100][100];
int main()
{
    int x1,y1,x2,y2,k=0;
    cin>>x1>>y1;
    int i=0,j=0;
    for(i=0;i<x1;i++)
       {
                     for(j=0;j<y1;j++)
                     cin>>a[i][j];
        }
    cin>>x2>>y2;
    i=0,j=0;
    for(i=0;i<x2;i++)
       {
                     for(j=0;j<y2;j++)
                     cin>>b[i][j];
        }
     i=0,j=0;
    for(i=0;i<x1;i++) 
         {
                      for(j=0;j<y2;j++)
                      {
                      for(k=0;k<y1;k++)
                      c[i][j]=c[i][j]+a[i][k]*b[k][j];
                      }
          } 
          i=0,j=0;
   for(i=0;i<x1;i++)
          {
                    for(j=0;j<y2-1;j++)
                    {
                                     cout<<c[i][j]<<" ";
                    }
                    cout<<c[i][y2-1];
                    cout<<endl;
          }         
cin.get();
cin.get();
cin.get();
cin.get();
cin.get();
cin.get();
cin.get();
return 0;        
}
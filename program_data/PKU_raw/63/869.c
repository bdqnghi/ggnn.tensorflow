int main()
{
    int x1,y1;
    int i,j,k,l;
    int x2,y2;
    int a[200][200];
    int b[200][200];
    int c[200][200];
    cin>>x1>>y1;
    for(i=0;i<x1;i++)
     {
        for(j=0;j<y1;j++)
          cin>>a[i][j];
          cout<<endl;
     }
     cin>>x2>>y2;
     for(i=0;i<x2;i++)
     {
       for(j=0;j<y2;j++)
         cin>>b[i][j];
         cout<<endl;     
     }
     for(i=0;i<x1;i++)
     {
        for(j=0;j<y2;j++)
        {
           for(k=0;k<y1;k++)
           c[i][j]+=a[i][k]*b[k][j];
        }                      
     }
      for(i=0;i<x1;i++)
       {for(j=0;j<y2-1;j++)
        cout<<c[i][j]<<" ";
        cout<<c[i][y2-1];
        cout<<endl;}
        int ss;cin>>ss;
        return 0;
}  

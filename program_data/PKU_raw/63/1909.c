int main()
{
    int a[101][101], b[101][101], i, j, h, l, c[101][101], x1, y1, x2, y2;
    cin>>x1>>y1;
    for(i=1; i<=x1; i++)
      {
        for(j=1; j<=y1; j++)
          {
            cin>>a[i][j];     
          }     
      }
    cin>>x2>>y2;
    for(i=1; i<=x2; i++)
      {
        for(j=1; j<=y2; j++)
          {
            cin>>b[i][j];     
          }     
      }
    for(i=1; i<=x1; i++)
      {
        for(j=1; j<=y2; j++)
          {
            c[i][j]=0;
            for(h=1,l=1; l<=y1; l++,h++)
              {
                c[i][j]=c[i][j]+a[i][l]*b[h][j];
              }
          }
      }
    for(i=1; i<=x1; i++)
      {
        for(j=1; j<=y2; j++)
          {
            cout<<c[i][j];
            if(j<y2)
              cout<<" ";
            else
              cout<<endl;     
          }
      }
    int f;cin>>f;
    return 0;
                 
                 
                 
}

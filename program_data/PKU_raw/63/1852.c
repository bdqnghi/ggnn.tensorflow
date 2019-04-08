int main()
{
  int x1,y1;
  cin>>x1>>y1;
  int A[x1][y1];
  for(int i=0;i<x1;i++)
  {
    for(int j=0;j<y1;j++)
    {
      cin>>A[i][j];
    }
  }
  int x2,y2;
  cin>>x2>>y2;
  int B[x2][y2];
  for(int k=0;k<x2;k++)
  {
     for(int g=0;g<y2;g++)
     {
        cin>>B[k][g];
     }
  }
  int C[x1][y2];
  for(int a=0;a<x1;a++)
  {
    for(int d=0;d<y2;d++)
    {
      C[a][d]=0;
    }
  }            
  for(int h=0;h<x1;h++)
  {   
     for(int l=0;l<y2;l++)
     {
      for(int s=0;s<y1;s++)
      {
        C[h][l]+=A[h][s]*B[s][l];
      }                  
     }
  }
  
  for(int p=0;p<x1;p++)
  {
     for(int q=0;q<y2-1;q++)
     {
        cout<<C[p][q]<<" ";
     }          
     cout<<C[p][y2-1]<<endl;
  }
  
  return 0;
}
  
                      

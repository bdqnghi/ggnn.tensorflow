int main()
{
    int x1,y1;
    cin>>x1>>y1;
    int squarea[x1][y1];
    int i,j,k;
    for(i=0;i<x1;i++)
    {
                   for(j=0;j<y1;j++)
                   {cin>>squarea[i][j];}  
    }//??????????
    int x2,y2;
    cin>>x2>>y2;
    int squareb[x2][y2];
     for(i=0;i<x2;i++)
    {
                   for(j=0;j<y2;j++)
                   {cin>>squareb[i][j];}  
    }//??????????
    int result[x1][y2];
    for(i=0;i<x1;i++)
    {
                     for(j=0;j<y2;j++)
                     {
                                      result[i][j]=0;//???
                                      for(k=0;k<y1;k++)
                                      {result[i][j]+=squarea[i][k]*squareb[k][j];}//??
                     }
    }
    for(i=0;i<x1;i++)//????
    {
                     cout<<result[i][0];//???????
                     for(j=1;j<y2;j++)
                     {cout<<" "<<result[i][j];}//???????
                     cout<<endl;
    }
    cin>>i;
    return 0;
}

int main()
{
    int a[10][10],b=0; //?????i<5,j<5,a[i+1][j],a[i+2][j],a[i+3][j],a[i+4][j],a[i][j+1],a[i][j+2],a[i][j+3],a[i][j+4]?? 
    for(int i=0;i<5;i++)
    {
      for(int j=0;j<5;j++)
      cin>> a[i][j];
    }
    for(int i=0;i<5;i++)
    {
      for(int j=5;j<10;j++)
      a[i][j]=a[i][j-5];
    }
    for(int i=0;i<5;i++)
    {
      for(int j=5;j<10;j++)
      a[j][i]=a[j-5][i];
    }
    for(int i=0;i<5;i++)
    {
      for(int j=0;j<5;j++)
      {
        if((a[i][j]>a[i][j+1])&&(a[i][j]>a[i][j+2])&&(a[i][j]>a[i][j+3])&&(a[i][j]>a[i][j+4])
         &&(a[i][j]<a[i+1][j])&&(a[i][j]<a[i+2][j])&&(a[i][j]<a[i+3][j])&&(a[i][j]<a[i+4][j]))//????????? 
        {
          b=1;
          cout<< i+1 << " " << j+1 << " " << a[i][j] <<endl;
        }
      }
    }
    if(b==0)
    cout<< "not found" <<endl;
    return 0;
}
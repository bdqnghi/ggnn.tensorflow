int main()
{
    int a[9][9]={{0}},b[9][9]={{0}};
    int days,i,j,k,l,m;
    cin>>a[4][4]>>days;
    for(i=0;i<days;i++)
      {for(l=0;l<9;l++)
         for(m=0;m<9;m++)
                b[l][m]=0;
      for(j=1;j<8;j++)
        for(k=1;k<8;k++)
          {
            if(a[j][k]==0)continue;
            else
            {
                b[j][k]+=2*a[j][k];
                b[j-1][k-1]+=a[j][k];
                b[j+1][k+1]+=a[j][k];
                b[j-1][k+1]+=a[j][k];
                b[j+1][k-1]+=a[j][k];
                b[j][k+1]+=a[j][k];
                b[j-1][k]+=a[j][k];
                b[j+1][k]+=a[j][k];
                b[j][k-1]+=a[j][k];
                a[j][k]=0;
            }
          }
        for(j=0;j<9;j++)
          for(k=0;k<9;k++)
            a[j][k]=b[j][k];
      }
    for(j=0;j<9;j++)
       {
         cout<<a[j][0];
         for(k=1;k<9;k++)
         {cout<<" "<<a[j][k];}
         cout<<endl;
       }
    cin>>days;
    return 0;
}

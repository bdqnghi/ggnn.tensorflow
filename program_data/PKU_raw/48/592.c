int main()
{
    int a[10][10],t[10][10];
    int time=0,i=0,j=0,k=0;
    for(i=1;i<10;i++)
       for(j=1;j<10;j++)
       a[i][j]=0;
    cin>>a[5][5]>>time;
    for(i=0;i<time;i++)
      {
          for(j=5-i;j<=5+i;j++)
            for(k=5-i;k<=5+i;k++)
            t[j][k]=a[j][k];
          for(j=5-i;j<=5+i;j++)
            for(k=5-i;k<=5+i;k++)
            {
               a[j-1][k-1]=a[j-1][k-1]+t[j][k];
               a[j-1][k]=a[j-1][k]+t[j][k];
               a[j-1][k+1]=a[j-1][k+1]+t[j][k];
               a[j][k-1]=a[j][k-1]+t[j][k];
               a[j][k]=a[j][k]+t[j][k];
               a[j][k+1]=a[j][k+1]+t[j][k]; 
               a[j+1][k-1]=a[j+1][k-1]+t[j][k]; 
               a[j+1][k]=a[j+1][k]+t[j][k]; 
               a[j+1][k+1]=a[j+1][k+1]+t[j][k]; 
                      
            }
      }
    for(i=1;i<10;i++)
       {
             for(j=1;j<=8;j++)
                cout<<a[i][j]<<" ";
             cout<<a[i][9]<<endl;
       }
       cin.get();cin.get();cin.get();cin.get();
       return 0;
}

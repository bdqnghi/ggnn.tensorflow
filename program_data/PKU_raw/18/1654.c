int n,a[100][100];
void hang(int m)
{
    int min=10000;     
    for(int i=0;i<n;i++)
    {
            if(a[m][i]<min) min=a[m][i];
    }     
    for(int i=0;i<n;i++)  a[m][i]-=min;
}
void lie(int m)
{
     int min=10000;
     for(int i=0;i<n;i++)
     {
            if(a[i][m]<min)  min=a[i][m]; 
     }
     for(int i=0;i<n;i++)   a[i][m]-=min;
}
void del(int a[100][100])
{
     int i,j;
     for(i=1;i<n-1;i++)
     {
          for(j=0;j<n;j++)
          {
               a[i][j]=a[i+1][j];           
          }             
     }
     for(i=1;i<n-1;i++)
     {
          for(j=0;j<n;j++)
          {
               a[j][i]=a[j][i+1];           
          }             
     }
}
int main()
{
    int i;
    cin>>n;
    for(int l=0;l<n;l++)
    {
       for(int i=0;i<n;i++)
       {
          for(int j=0;j<n;j++)
          {
                 cin>>a[i][j]; 
          }  
       }
       int k=0,sum=0;     
       while(k<n-1)
       {
          for(i=0;i<n;i++)  hang(i);
          for(i=0;i<n;i++)  lie(i);
          sum+=a[1][1];
          del(a);
          k++;
       }
       cout<<sum<<endl;
    }
    return 0;
}

void germs(int n,int a[11][11],int b[11][11]);
int main()
{
    int i,j,m,n,a[11][11]={0},b[11][11]={0};
    cin>>m>>n;
    a[5][5]=m;
    
    germs(n,a,b);
    for(i=1;i<=9;i++)
     {for(j=1;j<9;j++)
       cout<<a[i][j]<<" ";
       cout<<a[i][j]<<endl;
       }
       
}
void germs(int n,int a[11][11],int b[11][11])
{
     int i,j;
     if(n>0)
      {for(i=1;i<=9;i++)
         for(j=1;j<=9;j++)
           b[i][j]=0;
           
       for(i=1;i<=9;i++)
       {for(j=1;j<=9;j++)
         {  if(a[i][j]==0) continue;  
          else   
            {b[i][j]+=a[i][j]*2;
             b[i+1][j]+=a[i][j];
             b[i-1][j]+=a[i][j];
             b[i][j+1]+=a[i][j];
             b[i][j-1]+=a[i][j];
             b[i+1][j+1]+=a[i][j];
             b[i-1][j+1]+=a[i][j];
             b[i+1][j-1]+=a[i][j];
             b[i-1][j-1]+=a[i][j];
            }
         }
       }
       for(i=1;i<=9;i++)
        for(j=1;j<=9;j++)
          a[i][j]=b[i][j];
       germs(n-1,a,b);
      }
}
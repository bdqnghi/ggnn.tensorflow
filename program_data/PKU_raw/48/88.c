void fanzhi();
int a[9][9]={0};
int zhen[9][9]={0};
int main()
{
    int i,j,n,m;
    cin>>m;
    cin>>n;
    a[4][4]=m;
    for(i=1;i<=n;i++)
    {
      fanzhi();                 
    }
   for(i=0;i<=8;i++)
   {
     for(j=0;j<=7;j++)
     cout<<a[i][j]<<" ";
     cout<<a[i][8];
     cout<<endl;                  
   }
    
    return 0;
}

void fanzhi()
{int i,j;
   memset(zhen,0,sizeof(zhen));
   for(i=0;i<=8;i++)
     for(j=0;j<=8;j++)
     {
       zhen[i+1][j]+=a[i][j];
       zhen[i][j]+=a[i][j]*2;               
       zhen[i-1][j]+=a[i][j];
       zhen[i][j-1]+=a[i][j];
       zhen[i][j+1]+=a[i][j];
       zhen[i+1][j+1]+=a[i][j];
       zhen[i-1][j+1]+=a[i][j];
       zhen[i+1][j-1]+=a[i][j];
       zhen[i-1][j-1]+=a[i][j];          
     }
    for(i=0;i<=8;i++)
      for(j=0;j<=8;j++)
       {
          a[i][j]=zhen[i][j];          
       }   
}
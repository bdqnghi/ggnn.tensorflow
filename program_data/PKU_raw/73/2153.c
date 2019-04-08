int op[5][5];
int vis[5][5]={0};


int main()
{
    for(int i=0;i<5;i++)
      for(int j=0;j<5;j++)
       cin >> op[i][j];
    for(int i=0;i<5;i++)
     for(int j=0;j<5;j++)
      {
             for(int col=0;col<5;col++)
               if(op[i][j]<op[i][col])
                vis[i][j]=1;
             for(int cow=0;cow<5;cow++)
               if(op[i][j]>op[cow][j])
                vis[i][j]=1;
      }
      int sum=0;
      for(int i=0;i<5;i++)
       for(int j=0;j<5;j++)
         {
               if(vis[i][j]==0)
               {cout << i+1<<" " << j+1 <<" "<< op[i][j] <<endl;
                sum++;
                }
         }
     if(sum==0) cout<<"not found"<<endl;
     return 0;
}       
       
       
       
       

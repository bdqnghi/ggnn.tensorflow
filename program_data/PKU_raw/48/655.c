int main()
{
    int zhen[11][11],zhen2[11][11],m,n,i,j,k,hang1,hang2;
    for(i=0;i<=10;i++)
    {
                     for(j=0;j<=10;j++)zhen[i][j]=0;
    }
    cin>>m>>n;
    zhen[5][5]=m;//??????? 
    hang1=5;
    hang2=5;
    for(k=1;k<=n;k++)
    {
                    
                    for(i=0;i<=10;i++)
                     {
                       for(j=0;j<=10;j++)zhen2[i][j]=zhen[i][j];//?????????????????????????? 
                     } 
                     for(i=hang1-1;i<=hang2+1;i++)
                     {
                                      for(j=hang1-1;j<=hang2+1;j++)zhen[i][j]=zhen2[i-1][j-1]+zhen2[i-1][j]+zhen2[i-1][j+1]+zhen2[i][j-1]+2*zhen[i][j]+zhen2[i][j+1]+zhen2[i+1][j-1]+zhen2[i+1][j]+zhen2[i+1][j+1];
                     }//?????????? 
                     hang1=hang1-1;
                     hang2=hang2+1;//???????            
    }
    for(i=1;i<=9;i++)
    {
                     for(j=1;j<=9;j++)
                     {cout<<zhen[i][j];
                     if(j<9)cout<<" ";
                     }
                     cout<<endl;//?? 
    }
    cin.get();cin.get();cin.get();cin.get();cin.get();
return 0;
}
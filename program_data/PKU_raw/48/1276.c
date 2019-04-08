int main()
{
int m,n;
scanf("%d %d",&m,&n);
int sz[5][9][9];
for(int i=0;i<9;i++)
{
                for(int j=0;j<9;j++)
                {sz[0][i][j]=0;}
                }
                sz[0][4][4]=m;
                
                
                
                for(int t=0;t<n;t++)
{


    for(int k=0;k<9;k++)
    {
            for(int hl=0;hl<9;hl++)
          {
                    if(k!=0&&hl!=0&&k!=8&&hl!=8)
                    {
                     sz[t+1][k][hl]=2*sz[t][k][hl]+sz[t][k][hl-1]+sz[t][k][hl+1]+sz[t][k-1][hl+1]+sz[t][k+1][hl+1]+sz[t][k-1][hl]+sz[t][k-1][hl-1]+sz[t][k+1][hl]+sz[t][k+1][hl-1];
                                                }
                    if(k==0&&hl!=0&&hl!=8)
                    {sz[t+1][0][hl]=2*sz[t][0][hl]+sz[t][0][hl-1]+sz[t][0][hl+1]+sz[t][1][hl+1]+sz[t][1][hl]+sz[t][1][hl-1];
                                         }
                    if(k==8&&hl!=0&&hl!=8)
                    {sz[t+1][8][hl]=2*sz[t][8][hl]+sz[t][8][hl-1]+sz[t][8][hl+1]+sz[t][7][hl+1]+sz[t][7][hl]+sz[t][7][hl-1];
                                         }
                    if(k!=0&&hl==0&&k!=8)
                    {
                     sz[t+1][k][0]=2*sz[t][k][0]+sz[t][k][1]+sz[t][k-1][1]+sz[t][k+1][1]+sz[t][k-1][0]+sz[t][k+1][0];
                                                }
                    if(k!=0&&hl==8&&k!=8)
                    {
                     sz[t+1][k][8]=2*sz[t][k][8]+sz[t][k][7]+sz[t][k-1][7]+sz[t][k+1][7]+sz[t][k-1][8]+sz[t][k+1][8];
                                                }
                    if(k==0&&hl==0)
                    {
                     sz[t+1][0][0]=2*sz[t][0][0]+sz[t][0][1]+sz[t][1][1]+sz[t][1][0];
                                                }
                    if(k==0&&hl==8)
                    {
                     sz[t+1][0][8]=2*sz[t][0][8]+sz[t][0][7]+sz[t][1][7]+sz[t][1][8];
                                                }
                                                
                                                
                   if(k==8&&hl==0)
                    {
                     sz[t+1][8][0]=2*sz[t][8][0]+sz[t][8][1]+sz[t][7][1]+sz[t][7][0];
                                                }
                    if(k==8&&hl==8)
                    {
                     sz[t+1][8][8]=2*sz[t][8][8]+sz[t][8][7]+sz[t][7][7]+sz[t][7][8];
                                                }
                                                
                                                
                    
          }
          
    }
}
                
                
                
                
                for(int row=0;row<9;row++)
                {
                for(int lo=0;lo<8;lo++)
                {printf("%d ",sz[n][row][lo]);}
                printf("%d\n",sz[n][row][8]);
                        }

      

	return 0;
}
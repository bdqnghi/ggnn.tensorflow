int main()
{int m,n,mount[30][30],i,j;
 cin>>m>>n;
 for(i=0;i<m;i++) for(j=0;j<n;j++) cin>>mount[i][j];   //?????? 
 for(i=0;i<m;i++) for(j=0;j<n;j++)
     {if(i==0&&j==0&&mount[0][0]>=mount[0][1]&&mount[0][0]>=mount[1][0]) cout<<i<<" "<<j<<endl; //?????0?????? 
        else if(i==0&&j==n-1&&mount[0][n-1]>=mount[0][n-2]&&mount[0][n-1]>=mount[1][n-1]) cout<<i<<" "<<j<<endl;
          else if(i==0&&mount[0][j]>=mount[0][j-1]&&mount[0][j]>=mount[0][j+1]&&mount[0][j]>=mount[1][j]) cout<<i<<" "<<j<<endl;
           else if(i==m-1&&j==n-1&&mount[m-1][n-1]>=mount[m-1][n-2]&&mount[m-1][n-1]>=mount[m-2][n-1]) cout<<i<<" "<<j<<endl;  //???????????? 
             else if(i==m-1&&j==0&&mount[m-1][0]>=mount[m-1][1]&&mount[m-1][0]>=mount[m-2][0]) cout<<i<<" "<<j<<endl;
               else if(i==m-1&&mount[m-1][j]>=mount[m-1][j-1]&&mount[m-1][j]>=mount[m-1][j+1]&&mount[m-1][j]>=mount[m-2][j]) cout<<i<<" "<<j<<endl;
                 else if(j==0&&mount[i][j]>=mount[i-1][j]&&mount[i][j]>=mount[i+1][j]&&mount[i][j]>=mount[i][1]) cout<<i<<" "<<j<<endl; //?????0?
                   else if(j==n-1&&mount[i][j]>=mount[i-1][j]&&mount[i][j]>=mount[i+1][j]&&mount[i][j]>=mount[i][n-2]) cout<<i<<" "<<j<<endl;  //??????1? 
                     else if(mount[i][j]>=mount[i][j-1]&&mount[i][j]>=mount[i-1][j]&&mount[i][j]>=mount[i][j+1]&&mount[i][j]>=mount[i+1][j]) cout<<i<<" "<<j<<endl; //???? 
                  }
 
 return 0;
    } 

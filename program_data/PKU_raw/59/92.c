char room[120][120][2]={0};
int n;

void infect()   //?????? 
{int i,j;
 for(i=0;i<n;i++) for(j=0;j<n;j++) room[i][j][1]=room[i][j][0];  //????????? 
 for(i=0;i<n;i++) for(j=0;j<n;j++) if(room[i][j][0]=='@')
   {if(i<n-1&&room[i+1][j][0]=='.') room[i+1][j][1]='@';
   if(i>0&&room[i-1][j][0]=='.') room[i-1][j][1]='@';
   if(j<n-1&&room[i][j+1][0]=='.') room[i][j+1][1]='@';
   if(j>0&&room[i][j-1][0]=='.') room[i][j-1][1]='@';
    }
 for (i=0;i<n;i++) for(j=0;j<n;j++) room[i][j][0]=room[i][j][1];
 }

int main()
{int i,j,m,total=0;
 cin>>n;
 for(i=0;i<n;i++) for(j=0;j<n;j++) cin>>room[i][j][0]; 
 cin>>m; 
 for(i=1;i<m;i++) infect();
 for(i=0;i<n;i++) for(j=0;j<n;j++) if(room[i][j][0]=='@') total++; //??
 cout<<total<<endl;

 return 0; 
 } 

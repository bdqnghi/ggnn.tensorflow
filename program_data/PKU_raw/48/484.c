int pool[11][11][2]={0}; //????????????????????? 

void breed(int j,int k)    //?????????????
{pool[j][k][1]+=2*pool[j][k][0];
 pool[j-1][k-1][1]+=pool[j][k][0];
 pool[j+1][k][1]+=pool[j][k][0];
 pool[j-1][k][1]+=pool[j][k][0];
 pool[j][k+1][1]+=pool[j][k][0];
 pool[j][k-1][1]+=pool[j][k][0];
 pool[j+1][k+1][1]+=pool[j][k][0];
 pool[j+1][k-1][1]+=pool[j][k][0];
 pool[j-1][k+1][1]+=pool[j][k][0];
 pool[j][k][0]=0;}


int main()
{
 int m,n,i,j,k;
 cin>>m>>n;
 pool[5][5][0]=m;
 for(i=0;i<n;i++)
     {for(j=1;j<10;j++) for(k=1;k<10;k++) breed(j,k);
      for(j=1;j<10;j++) for(k=1;k<10;k++) pool[j][k][0]=pool[j][k][1];    //???? 
      for(j=1;j<10;j++) for(k=1;k<10;k++) pool[j][k][1]=0;                //???? 
      
                 }
 for(j=1;j<10;j++) {for(k=1;k<9;k++) cout<<pool[j][k][0]<<" "; cout<<pool[j][9][0]<<endl;}
 return 0;
    } 

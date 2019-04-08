int judge(int s[22][22],int i,int j,int m,int n);//judge???ij????????? 
int main()
{
    int m=0,n=0,i=0,j=0,s[22][22]={0};
      cin>>m>>n;
      for(i=0;i<=m-1;i++)//???? 
         for(j=0;j<=n-1;j++)
            cin>>s[i][j];
      for(i=0;i<=m-1;i++)
        for(j=0;j<=n-1;j++)
            {
               if(judge(s,i,j,m,n))      
               cout<<i<<" "<<j<<endl;         
            }
return 0;    
}
int judge(int s[22][22],int i,int j,int m,int n)//judge???ij????????? 
{
        int ji=0;
        if(((i-1>=0)&&(s[i][j]>=s[i-1][j]))||(i==0))
        ji++;
        if(((i+1<=m-1)&&(s[i][j]>=s[i+1][j]))||(i==m-1))
        ji++;
        if(((j-1>=0)&&(s[i][j]>=s[i][j-1]))||(j==0))
        ji++;
        if(((j+1<=n-1)&&(s[i][j]>=s[i][j+1]))||(j==n-1))
        ji++;
        if(ji==4)
        return 1;
        else
        return 0;
}

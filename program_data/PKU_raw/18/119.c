//?????????
int sum=0,n;
void GuiLing(int num[][100],int n,int move);
void XiaoJian(int num[][100],int move);
int main()
{
    int i,j,t,num[100][100];
    cin>>n;
    for (t=0;t<n;t++)
    {
      sum=0;
      for (i=0;i<n;i++)
       for (j=0;j<n;j++)
         cin>>num[i][j];
         XiaoJian(num,0);
         cout<<sum<<endl;
    } 
    return 0;
}
void XiaoJian(int num[][100],int move) //move??n-????? 
{
     if (move==n-1)  //??????1???????? 
     {;} 
     else                    
     {
     GuiLing(num,n,move);  //?? 
     sum=sum+num[move+1][move+1];   
     XiaoJian(num,move+1); //???? 
     }
}
void GuiLing(int num[][100],int n,int move)
{
   int i,j,min;
   //??? 
   for (i=0;i<n;i++)
    {
      if ((move!=0)&&((i>=1)&&(i<=move))) continue; //??????“??”???? 
      min=num[i][0];
      for (j=1;j<n;j++)
      {  
         if ((move!=0)&&((j>=1)&&(j<=move))) continue;  //??????“??”???? 
         if (num[i][j]<min) min=num[i][j];
      }
      if (min!=0)
      {
        for (j=0;j<n;j++) 
        {
            if ((move!=0)&&((j>=1)&&(j<=move))) continue; 
            num[i][j]=num[i][j]-min;
        }
      }
     } 
     //???  
    for (j=0;j<n;j++)
    {
      if ((move!=0)&&((j>=1)&&(j<=move))) continue; //??????“??”???? 
      min=num[0][j];
      for (i=1;i<n;i++)
      {  
         if ((move!=0)&&((i>=1)&&(i<=move))) continue;  //??????“??”???? 
         if (num[i][j]<min) min=num[i][j];
      }
      if (min!=0)
      {
        for (i=0;i<n;i++) 
        {
            if ((move!=0)&&((i>=1)&&(i<=move))) continue; 
            num[i][j]=num[i][j]-min;
        }
      }  
    } 
}
                

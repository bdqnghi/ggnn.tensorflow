int main()
{
  int m,n,i,j,k; 
  int up=0,down=0,left=0,right=0;    
  int a[22][22]={0};
  scanf("%d %d",&m,&n);
  for(i=1;i<=m;i++)
  {
       for(j=1;j<=n;j++)
       {
         scanf("%d",&a[i][j]);                                   
       }       
  }  
  
  for(i=1;i<=m;i++)
  {
      for (j=1;j<=n;j++)
      {
          up=a[i][j]-a[i-1][j];
          down=a[i][j]-a[i+1][j];
          left=a[i][j]-a[i][j-1];
          right=a[i][j]-a[i][j+1];
       
           if(up>=0 && down>=0 && left>=0 && right>=0)
           {printf("%d %d\n",i-1,j-1);}
      }                                
  }      
}

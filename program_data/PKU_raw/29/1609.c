int main()
{
  int m,n,i,j;//i,j??????
  float up[100],down[100];//?????????????? 
  float sum;//???
  cin>>m;
  up[1]=2;up[2]=3;
  down[1]=1;down[2]=2;//???? 
  for (i=1;i<=m;i++)
  {
    sum=0;
    cin>>n;
    if (n==1) sum=sum+(up[1]/down[1]);
    if (n==2) sum=sum+(up[1]/down[1])+(up[2]/down[2]);//???????????
    if (n>=3)
      {
         sum=sum+(up[1]/down[1])+(up[2]/down[2]);
         for (j=3;j<=n;j++)
           {
              up[j]=up[j-1]+up[j-2];
              down[j]=down[j-1]+down[j-2];//??????J??
              sum=sum+(up[j]/down[j]);//???                
           } 
      }    
     printf("%.3f",sum);
     cout<<endl; 
  } 
  
  return 0; 
} 
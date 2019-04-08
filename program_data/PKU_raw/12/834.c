int main()
{
    int n,a[16][16],i,j,t[15]={0},k=0,f,b[16]={0};
    for(i=0;i<=10;i++)
    {
      for(j=0;j<=15;j++)
        {
          scanf("%d",&a[i][j]);
          if(a[i][j]==-1) break;
          if(a[i][j]==0) 
          break;
          t[i]=t[i]+1;
        } 
       if(a[i][j]==-1) break;
         k=k+1;
       }
     for(i=0;i<k;i++)
      {
        for(j=0;j<t[i];j++)
        {
          for(f=j+1;f<=t[i];f++)
          {
            if((a[i][j]==2*a[i][f])||(a[i][f]==2*a[i][j]))
              b[i]++;
          }
        }
      }  
      for(i=0;i<k;i++)
      printf("%d\n",b[i]);
      return 0;
}  

main()
{
      int n,i,j,first,num,fstn,counter1=0,counter2=0;
      int sum=0;
      int c[100][100]={0};
      int s[100]={0};
      int t[100]={0};
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
          for(j=0;j<n;j++)
          {   
              scanf("%d",&c[i][j]);
          }
       } 
       for(i=0;i<n;i++)
       {
          int tum1=0;
          sum=0;
          for(j=0;j<n;j++)
          {      
            sum+=c[i][j];
          }
          tum1=n-sum/255;
          s[i]=tum1;
        
       }
      
      
      for(i=0;i<n;i++)
      {
          if(s[i]!=0)
          {
              first=i+1;
              fstn=s[i];
              break;
          }
      }     
      for(i=first;s[i]!=fstn;i++)
      {
           counter1++;
      }
      for(j=0;j<n;j++)
      {
           int tum2;
           sum=0;
           for(i=0;i<n;i++)
           {
               sum+=c[i][j];
           }
           tum2=n-sum/255;
           t[j]=tum2;
      }
      for(j=0;j<n;j++)
      {
          if(t[j]!=0)
          {
              first=j+1;
              fstn=t[j];
              break;
          }
      }     
      for(j=first;t[j]!=fstn;j++)
      {
           counter2++;
      }      
      
      
      
      
      printf("%d",counter1*counter2);
}
 
          

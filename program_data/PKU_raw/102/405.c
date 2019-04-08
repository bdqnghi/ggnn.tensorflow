main()
{
      int n,k,i=0,j=0,countm=0,countf=0,I,J;
      char sex[50][10]={'\0'};
      float h[50]={0},m[50]={0},f[50]={0};
      float temp;
      scanf("%d",&n);
      for(k=0;k<n;k++)
      {
            scanf("%s %f",sex[k],&h[k]);          
      }
      for(k=0;k<n;k++)
      {
            if(sex[k][0]=='m')
            {
                    m[i]=h[k];
                    i++;
                    countm++;          
            } 
            else
            {
                    f[j]=h[k];
                    j++;
                    countf++;
            }         
      }
      for(i=countm-1;i>0;i--)
      {
             for(I=0;I<i;I++)
             {
                       if(m[I]>m[I+1])
                    {
                           temp=m[I+1];
                           m[I+1]=m[I];
                           m[I]=temp;        
                    }      
             }                
      }
      for(j=countf-1;j>0;j--)
      {
             for(J=0;J<j;J++)
             {
                      if(f[J]>f[J+1])
                    {
                           temp=f[J+1];
                           f[J+1]=f[J];
                           f[J]=temp;        
                    }       
             }                
      }
      for(i=0;i<countm;i++)
      printf("%.2f ",m[i]);
      for(j=countf-1;j>0;j--)
      printf("%.2f ",f[j]);
      printf("%.2f",f[0]);
      getchar();
      getchar(); 
      getchar();
      getchar();
}

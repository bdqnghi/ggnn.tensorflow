main()
{     char s[100];
      double m[40];
      double f[40];
      int n,j=0,k=0;
      scanf("%d",&n);
      for(int i=0;i<n;i++){
              scanf("%s",s);
              if(s[0]=='m'){
                            scanf("%lf",&m[j]);j++;}
              else if(s[0]=='f'){
                            scanf("%lf",&f[k]);k++;}
              }
      
      for(int jj=j-1;jj>0;jj--)
      {
      for(int r=0;r<jj;r++)
        {if(m[r]>m[r+1])
        {double tmp;
         tmp=m[r+1];
         m[r+1]=m[r];
         m[r]=tmp;
        }
        }
                           
        }    
        
        for(int jj=k-1;jj>0;jj--)
      {
      for(int r=0;r<jj;r++)
        {if(f[r]<f[r+1])
        {double tmp;
         tmp=f[r+1];
         f[r+1]=f[r];
         f[r]=tmp;
        }
        }
                           
        }  
        
        for(int ii=0;ii<j;ii++){
        printf("%.2f ",m[ii]);}
for(int ii=0;ii<k;ii++){
        printf("%.2f",f[ii]);
        if(ii<k-1)
        printf(" ");}  
      
      
      
      
      } 

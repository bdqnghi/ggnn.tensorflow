
main()

{    
     int m=1;
     while(m!=0) 
      {
      scanf("%d",&m);
      if(m==0)
      break;
      int a[1000],b[1000];
      int i;
      for(i=0;i<=m-1;i++)
      scanf("%d",&a[i]);
      for(i=0;i<=m-1;i++)
      scanf("%d",&b[i]);
      int j;
      int k;
      int num1=0,num2=0;
      for(i=0;i<=m-1;i++)
         {for(j=i;j<=m-1;j++)
           {if(a[i]<a[j])
              { k=a[i];
                a[i]=a[j];
                a[j]=k; 
              }          
           } 
         }
      for(i=0;i<=m-1;i++)
         {for(j=i;j<=m-1;j++)
           {if(b[i]<b[j])
              { k=b[i];
                b[i]=b[j];
                b[j]=k; 
              }          
           } 
         }
      int x,y,z,w; 
      x=a[0];
      y=b[0];
      z=a[m-1];
      w=b[m-1];
      if (x>y)
      y=x;
      if (z>w)
      z=w;
      
      
      for(i=0;i<m;i++)
      {for (j=0;j<m;j++)
           {if (a[m-1-i]>b[j])
             {num1++;
              a[m-1-i]=z-1;
              b[j]=y+1;
              break;} 
           
           }
              
      }
      for (i=0;i<m;i++)
      {for(j=0;j<m;j++)
          {if (a[i]==b[j])
             {num2++;
             a[i]=z-1;
             b[j]=y+1;}
          }
      }
      
            
      printf("%d\n",num1*200-(m-num1-num2)*200);
     }
        
     
      
      
}

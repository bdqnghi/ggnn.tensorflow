int main()
{
    int a[100]={0},t,n,i,j,ans;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&t);
      for(j=0;j<t;j++)
      {
      scanf("%d",&a[j]);
       }  
       if(t==0)
        {printf("60\n");continue;}
       else if(a[t-3]+3*(t-2)<60&&a[t-2]+3*(t-2)>60)
       { 
              ans=60-3*(t-2);
              printf("%d\n",ans);  continue; } 
        else if(a[t-2]+3*(t-1)>60)
       { 
              ans=a[t-2];
              printf("%d\n",ans);  continue; }
        else if(a[t-1]+3*(t-1)<=60&&a[t-1]+3*t>=60)
       { printf("%d\n",a[t-1]);
         continue; }      
            
       else if(a[t-1]+3*(t-1)<60)
       { printf("%d\n",60-3*t);
         continue; }
         
              else if(a[t-1]+3*(t-1)>60)
       { printf("%d\n",60-3*(t-1));
        continue; }               
       else if(a[t-1]+3*(t-2)>60)
       { 
            ans=60-3*(t-2);
            printf("%d\n",ans);
         continue; }           
       
        
         
                    }
     return 0;
    
    
    }

int main()
{
  int i=0;
  for(i=0;;i++)
 {
  
  int n,i,j,s,t=0,win=0,loss=0,equal=0,sum=0,f,g;
  scanf("%d",&n);
  if(n==0) break;
  int a[1000];
  int b[1000];
  int c[1000];
  int d[1000];

  
  for (i=0;i<n;i++)
  scanf("%d",&a[i]);
  for (i=0;i<n;i++)
  scanf("%d",&b[i]);
  

  for(i=0;i<=(n-2);i++) 
  {
       for (j=(n-2);  j>=i;  j--)  
       {
          if (a[j]>a[j+1]) 
           {
           s=a[j];
           a[j]=a[j+1];
           a[j+1]=s;
           } 
       } 
      // printf("%d ",a[i]) ; 
  }// printf("%d",a[n-1]); 
   
  for(i=0;i<=(n-2);i++) 
  {
       for (j=(n-2);  j>=i;  j--)  
       {
          if (b[j]>b[j+1]) 
           {
           s=b[j];
           b[j]=b[j+1];
           b[j+1]=s;
           } 
       } 
      // printf("%d ",a[i]) ; 
  }// printf("%d",a[n-1]); 
  /*for (i=0;i<=(n-1);i++)
  {
  printf("a[i]=%d     b[i]=%d\n",a[i],b[i]);
  }*/
   
                         for (i=0,j=(n-1),f=0,g=(n-1);i<=j&&f<=g;)
                {
                          if (  a[i]>b[f]  )
                          {
                                sum+=200;
                                i++;
                                f++;
                                //printf("%d\n",sum);
                          }      
                          else 
                          {
                               if  (  a[i]<b[f]  )
                                {
                                sum=sum-200;
                                i++;
                                g--;
                               // printf("%d\n",sum);
                                } 
                                else  //???????????????? 
                                   {    
                                       if  (  a[j]>b[g] )//??????????? ????????? 
                                        {
                                        sum+=200;
                                        //printf("%d\n",sum);
                                        j--;
                                        g--;
                                        }
                                       else  
                                            {
                                                 if  (a [j]<b[g]  )//???????????????????? 
                                                {
                                                sum-=200;
                                               // printf("%d\n",sum);
                                                i++;
                                                g--;
                                                }
                                             else //???????????????????? 
                                                {
                                                     if (  a[i]< b[g] )
                                                     {
                                                           sum-=200;
                                                           i++;
                                                           g--;
                                                     }
                                                     else 
                                                     {
                                                           sum =sum;
                                                           i++;
                                                           g--;  
                                                     }
                                                }
                                             
                                             
                                             }
                                             
                                   
                                   
                                   }
                                
                          }
                }
printf("%d\n",sum);
}

}

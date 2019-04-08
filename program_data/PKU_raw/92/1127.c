
 main()
{int N,i1,i2,j1,j2,k1,k2,ss,dd,judge,head1,head2,tail1,tail2,i;
 int t[1001];
 int s[1001]={0};
 int d[1001]={0};
 int q[1001];
  while(1)
  {ss=0;dd=0;
  int lose=0;
         scanf("%d",&N);
  if(N==0)
  {break;}
  for(i1=0;i1<N;i1++)
  {scanf("%d",&t[i1]);}
  for(i2=0;i2<N;i2++)
  {scanf("%d",&q[i2]);}
  
  int j,r;
     
      for(j=N-1;j>0;j--)
      {
      for(r=0;r<j;r++)
        {if(t[r]<t[r+1])
        {int tmp;
         tmp=t[r+1];
         t[r+1]=t[r];
         t[r]=tmp;
        }
        }
                           
        }         /*????? */
   for(j=N-1;j>0;j--)
      {
      for(r=0;r<j;r++)
        {if(q[r]<q[r+1])
        {int tmp;
         tmp=q[r+1];
         q[r+1]=q[r];
         q[r]=tmp;
        }
        }
                           
        }       /*?????*/
        head1=0;head2=0;tail1=N-1;tail2=N-1;
   for (j1=0;j1<N-1;j1++)
   {if(t[head1]<q[head2])
    {tail1--;
    head2++;
    lose++;}
    else if(t[head1]==q[head2])
       {
          if(t[tail1]>q[tail2])
          {tail1--;tail2--;ss++;}
          else if(t[tail1]==q[tail2])  
           {  if(t[head1]==t[tail1])
              {head1++;head2++;}
              else if(t[head1]>t[tail1])
              {head2++;tail1--;lose++;}
           } 
          else if(t[tail1]<q[tail2])
           {head2++;tail1--;lose++;} 
            
            
            
               
       
    
       
       }
    else if(t[head1]>q[head2])
    {ss++;head1++;head2++;}
         
       
   }
   if(t[head1]>q[head2])
   {ss++;}
   else if(t[head1]<q[head2])
   {lose++;}
   
  

  
   
  printf("%d\n",200*ss-200*lose);
    
  
  
  
  
  
  
  
          }  
     }


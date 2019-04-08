int main()
{
    int n,m,i,j,s,M,k1,l1,l2;
    for(i=0;;i++)
    {
       scanf("%d",&n);
       if(n==0)   break;
       else
       {
         int * t=(int*)malloc((n+1)*sizeof(int));
         int * q=(int*)malloc((n+1)*sizeof(int));
         for(j=0;j<n;j++)
         {scanf("%d",t+j);}
         for(j=0;j<n;j++)
         {scanf("%d",q+j);}
        for(j=0;j<n-1;j++)
         {
             for(m=j+1;m<n;m++)
             {
                if(*(t+j)<*(t+m))
                {s=*(t+j);*(t+j)=*(t+m);*(t+m)=s;}
             }
         }
         for(j=0;j<n-1;j++)
         {
             for(m=j+1;m<n;m++)
             {
                if(*(q+j)<*(q+m))
                {s=*(q+j);*(q+j)=*(q+m);*(q+m)=s;}
             }
         }
                 k1=0;M=0;l2=n-1;l1=n-1;
             for(j=0;j<n;j++)
             {
                   if(q[j]<0)
                     break;
                     else
                  {
                    if(q[j]<t[k1])
                    {M=M+200;k1+=1;q[j]=-9;}
                    if(q[j]==t[k1])
                    {
                          for(m=0;;m++)
                          {
                              if(q[l2]<0)
                              break;
                             if(q[l2]>=t[l1])
                             {
                                 if(t[l1]<q[j])
                                 {M=M-200;l1=l1-1;q[j]=-9;break;}
                                 else
                                 { l1=l1-1;q[j]=-9;break; }
                             }
                             if(q[l2]<t[l1])
                             {M=M+200;q[l2]=-9;l1=l1-1;l2=l2-1;}
                          }
                       }
                    if(q[j]>t[k1])
                    {M=M-200;l1=l1-1;q[j]=-9;}
                 }
             }
              printf("%d\n",M);
              free(t);
             free(q);
         }
       }
          return 0;
}



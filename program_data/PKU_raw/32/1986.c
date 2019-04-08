void main()
{
  char st1[10000],st2[10000];
  int n,re[10000],k,l1,l2,i,j,y;
  scanf("%d",&n);
  for(k=1;k<=n;k++)
 { scanf("\n");
   gets(st1);
   gets(st2);
   l1=strlen(st1);
   l2=strlen(st2);
   j=l1-l2;
   for(i=l2-1;i>=0;i--)
    st2[i+j]=st2[i];
   for(i=0;i<=j-1;i++)
    st2[i]='0';
   for(i=l1-1;i>=0;i--)
    {
      if(st1[i]>=st2[i])   
        re[i]=st1[i]-st2[i];
      else 
       {
         re[i]=st1[i]+10-st2[i];
         st1[i-1]=st1[i-1]-1;
       }
     }
    y=0;
    if(re[0]==0)
    for(i=0;i<l1;i++)
     {re[i]=re[i+1];
      y=1;
     }
   if(y==1)
   {for(i=0;i<l1-1;i++)
     printf("%d",re[i]);
    printf("\n");}
   else {for(i=0;i<l1;i++)
     printf("%d",re[i]);
   printf("\n");
   }
  }
 }
  
    
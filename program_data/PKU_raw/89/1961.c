
main()
{
      int n,i,k,l;
      int m[99999][2];  //??????????? ????????9999999????…… 
      scanf("%d",&n);
      for(i=0;;i++)
      {
                   scanf("%d %d",&m[i][0],&m[i][1]);  //?????????????? 
                   if (m[i][0]+m[i][1]==0)
                   break;
      }
      for(k=0;k<n;k++)
      {    
           int p=0,q=0;
           for(l=0;l<=i-1;l++)
           {
                         if(k==m[l][1])
                         p++;
           }
           for(l=0;l<=i-1;l++)
           {
                         if(k==m[l][0])
                         break;
                         else
                         q++;
           }
           if(p==n-1&&q==i) 
           {
                            printf("%d",k);
                            goto end;
           }
      }     
      end:
      if(k==n)
      printf("NOT FOUND"); 
}
